#pragma once

#include <string>

#include <Modloader/constants.h>
#include <Modloader/macros.h>

namespace modloader {
    using shutdown_handler = void (*)();
    extern IL2CPP_MODLOADER_DLLEXPORT std::string base_path;

    enum class InitializationType {
        OnInjectionComplete,
        OnGameReady,
    };

    struct IL2CPP_MODLOADER_DLLEXPORT Initialization {
        using init = void (*)();

        Initialization(init p_call, InitializationType when);

        InitializationType when;
        init call;
        Initialization* next;
    };

    template <typename T>
    struct ScopedSetter {
        T& variable;
        T previous_value;

        ScopedSetter(T& variable, T value) :
                variable(variable), previous_value(variable) {
            variable = value;
        }

        ScopedSetter(ScopedSetter const& other) = delete;
        ScopedSetter(ScopedSetter&& other) = delete;

        ~ScopedSetter() {
            variable = previous_value;
        }
    };

    template <typename T>
    struct ScopedCaller {
        T end;
        ScopedCaller(T start, T end) :
                end(end) {
            start();
        }

        ~ScopedCaller() {
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

    IL2CPP_MODLOADER_DLLEXPORT extern bool shutdown_requested;
} // namespace modloader

#define CALL_ON_INIT(func) modloader::Initialization func##_init_struct(&func, modloader::InitializationType::OnGameReady)
#define CALL_AFTER_INJECT(func) modloader::Initialization func##_init_struct(&func, modloader::InitializationType::OnInjectionComplete)
