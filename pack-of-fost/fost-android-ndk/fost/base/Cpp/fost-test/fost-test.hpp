/*
    Copyright 2003-2010, Felspar Co Ltd. http://fost.3.felspar.com/
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
        http://www.boost.org/LICENSE_1_0.txt
*/


#ifdef FOST_OS_WINDOWS
#define FOST_TEST_DECLSPEC __declspec(dllexport)
#else
#define FOST_TEST_DECLSPEC
#endif


#include <fost/core>
