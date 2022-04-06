#pragma once

#include <string>

#include <Il2CppModLoader/constants.h>
#include <Il2CppModLoader/macros.h>

namespace modloader
{
    using shutdown_handler = void(*)();
    extern IL2CPP_MODLOADER_DLLEXPORT std::string base_path;

    struct IL2CPP_MODLOADER_DLLEXPORT Initialization
    {
        using init = void (*)();
        Initialization(init p_call);

        init call;
        Initialization* next;
    };

    template<typename T>
    struct ScopedSetter
    {
        T& variable;
        T value;
        bool should_set;

        ScopedSetter(T& variable, T value)
            : variable(variable)
            , value(variable)
            , should_set(true)
        {
            variable = value;
        }

        ScopedSetter(ScopedSetter const& other) = delete;

        ScopedSetter(ScopedSetter&& other)
            : variable(other.variable)
            , value(other.value)
            , should_set(other.should_set)
        {
            other.should_set = false;
        }

        ~ScopedSetter()
        {
            if (should_set)
                variable = value;
        }
    };

    template<typename T>
    struct ScopedCaller
    {
        T end;
        ScopedCaller(T start, T end)
            : end(end)
        {
            start();
        }

        ~ScopedCaller()
        {
            end();
        }
    };

    IL2CPP_MODLOADER_DLLEXPORT void trace(MessageType type, int level, std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void info(std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void warn(std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void debug(std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void send_trace(MessageType type, int level, std::string const& group, std::string const& message);

    IL2CPP_MODLOADER_DLLEXPORT void add_shutdown_handler(shutdown_handler handler);
    IL2CPP_MODLOADER_DLLEXPORT void shutdown();

    IL2CPP_MODLOADER_DLLEXPORT extern bool shutdown_thread;
}

#define CALL_ON_INIT(func) modloader::Initialization func##_init_struct(&func)
