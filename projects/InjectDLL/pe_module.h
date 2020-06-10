// This code is part of example that was prepared specially for https://github.com/3F/Examples
// Copyright (c) 2018  Denis Kuzmin < x-3F@outlook.com > GitHub/3F
// Distributed under the MIT License

#pragma once
#include <string>
#include "common.h"
namespace InjectDLL
{
    class PEModule
    {
    public:

        /* 
            TODO: the linker together with C++17 still can't 
            resolve external symbols at least for template when using variadic arguments 
            (e.g. typename...)
        */
        template<typename Tret, typename... TArgs>
        inline Tret call(LPCSTR lpProcName, TArgs... args)
        {
            typedef Tret(*vargs)(TArgs...);
            try {
                return ((vargs)getProc(lpProcName))(args...);
            }
            catch (int errCode) {
                error("error calling " + std::string(lpProcName) + ": caught error " + std::to_string(errCode));
                return static_cast<Tret>(NULL);
            }

        }

        explicit PEModule(const TCHAR* pemodule);
        virtual ~PEModule();
        HMODULE lnk;

    protected:

        FARPROC getProc(LPCSTR lpProcName);

    };
}


