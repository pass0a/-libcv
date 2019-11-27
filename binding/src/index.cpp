#include "binding.h"
#include <WinSock.h>
#include <ws2bth.h>
struct pa_plugin gp;

extern "C" int passoa_init(pa_plugin p) {
    const pa_function_list_entry my_module_funcs[] = {
        { "init", libcvInit, PA_VARARGS /*nargs*/ },
        { 0, 0, 0 }
    };
    gp = p;
    gp.put_function_list(p.ctx, -1, my_module_funcs);
    return 0;
}
extern "C" int passoa_exit() {
    
    return 0;
}


