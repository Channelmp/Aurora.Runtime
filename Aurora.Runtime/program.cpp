#include "program.h"
#include "build.h"
#include "util.h"

namespace aurora {
	Program::Program() {

		printf("TV Bypass (%s) by Zetax.\n", BUILD_ID);
		printf("Built on: %s at %s\n", __DATE__, __TIME__);

		m_pCurl = new Curl;
	}
	Program::~Program() {
		if (m_pCurl) {
			delete m_pCurl;
		}
	}
}
