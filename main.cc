#include <bits/stdc++.h>
#include "server/src/server.hh"
#include "router/src/router.hh"

int main(int argc, char **argv) {
	restpp::Server s(8080, THREAD_MODE);

	s.router.handle("GET", "/", [](int, int) {
		return true;
	});

	s.run();
	return 0;
}