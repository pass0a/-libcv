import * as cv from './binding';
import { Duplex } from 'stream';
class Cv extends Duplex {
	constructor() {
		super();
	}
	init() {
		cv.init();
	}
}
export default new Cv();
