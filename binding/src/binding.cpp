#include "binding.h"
#include <iostream>
#include <thread>
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xview.hpp"

extern struct pa_plugin gp;
int gref = -1;
int gexit=1;
pa_context* gctx=NULL;


void onConnectChange(char* evname,int code) {
    bind_io(gp, [evname,code]() {
        if (gctx) {
            gp.eval_string(gctx, "(passoa_callbacks.call.bind(passoa_callbacks))");
            gp.push_int(gctx, gref);
            gp.push_string(gctx, evname);
            gp.push_int(gctx, code);
            gp.call(gctx, 3);
            gp.pop(gctx);
        }
    });
}
int libcvInit(pa_context *ctx) {
    xt::xarray<double> arr1
    { { 1.0, 2.0, 3.0 },
    { 2.0, 5.0, 6.0 },
    { 2.0, 5.0, 7.0 } };

    xt::xarray<double> arr2
    { 5.0, 6.0, 7.0 };

    xt::xarray<double> res = xt::view(arr1, 1) + arr2;

    std::cout << res;
    std::cout << "hello world!!!" << std::endl;
    return 0;
}