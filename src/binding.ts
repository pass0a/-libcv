if ('win32' == process.platform) {
	process.env.Path = process.env.Path + ';' + __dirname;
} else {
	process.env.Path = process.env.Path;
}
const cv = require('./libcv.passoa');
declare let passoa_callbacks: any;

export function bind(cb: (target: string, ...args: any[]) => void) {
	let ref = -1;
	if ('function' == typeof cb) {
		ref = passoa_callbacks.push(cb);
	}
	return cv.hook(ref);
}
export function init(cb?: () => void) {
	return cv.init();
}
