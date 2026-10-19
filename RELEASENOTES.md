### 0.1.15


feature: enforce strict ANSI/ISO C11 conformance and document library traits

* build now compiles as strict C11 (extensions off, no feature-test macro), so POSIX/BSD calls fail at compile time instead of slipping through silently
* README advertises the library's guarantees with std/apis/memory/threads badges: C11, strict ANSI, no internal allocation, thread-safe
* restored the INTERFACE include export so ``add_subdirectory()`` consumers that only call ``target_link_libraries`` can find installed-style headers like ``<mulle-core/mulle-core.h>``
* README integration examples switched from git submodules to CMake FetchContent







* Document `MULLE__HTTP_VERSION` bump from 0.1.14 to 0.1.15
* Document tightened mulle-c11 versioncheck range to 4.9.1


* Document `MULLE__HTTP_VERSION` bump from 0.1.14 to 0.1.15
* Document tightened mulle-c11 versioncheck range to 4.9.1

### 0.1.14





* README now documents installing mulle-http via the mulle-core library instead of as a standalone component
* removed Quickstart section and legacy standalone install instructions


* license terms now explicitly stated in each source file header
* API documentation restructured as asset/dox/api/toc/index.md

### 0.1.13

Various small improvements
