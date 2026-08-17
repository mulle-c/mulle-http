# mulle-http

#### 🈚 http URL parser

The http parser from NGINX, extracted from the NODE code base.
Based on `src/http/ngx_http_parse.c` from NGINX copyright Igor Sysoev



| Release Version                                       | Release Notes  | AI Documentation
|-------------------------------------------------------|----------------|---------------
| ![Mulle kybernetiK tag](https://img.shields.io/github/tag/mulle-c/mulle-http.svg) [![Build Status](https://github.com/mulle-c/mulle-http/workflows/CI/badge.svg)](//github.com/mulle-c/mulle-http/actions) | [RELEASENOTES](RELEASENOTES.md) | [DeepWiki for mulle-http](https://deepwiki.com/mulle-c/mulle-http)




## Documentation & Guides

* [API Summary](asset/dox/api/toc)




### You are here

![Overview](overview.dot.svg)





## Add

mulle-http is a component of the [mulle-core](//github.com/mulle-core/mulle-core) library. So in your code include the mulle-core umbrella header:

``` c
#include <mulle-core/mulle-core.h>
```

### Add mulle-core to a cmake and git project

``` bash
git submodule add https://github.com/mulle-core/mulle-core.git mulle-core
```

Add this to your `CMakeLists.txt`:

``` cmake
add_subdirectory( mulle-core)
target_link_libraries( ${PROJECT_NAME} PRIVATE mulle-core)
```


### Add mulle-core to a mulle-sde project

``` sh
mulle-sde add github:mulle-core/mulle-core
```

### Embed mulle-http with clib

``` sh
clib install --out src mulle-c/mulle-http
```

Append `src` to your include path (e.g. add `-isystem src`  to your `CFLAGS`)
and compile all the sources that were downloaded.




## Author

[Nat!](https://mulle-kybernetik.com/weblog) for Mulle kybernetiK  



