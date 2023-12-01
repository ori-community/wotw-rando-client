#pragma once

#include <Common/event_bus.h>

#include <Modloader/constants.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

#include <atomic>
#include <filesystem>
#include <string>

enum class ModloaderEvent {
    InjectionComplete,
    GameReady,
    Shutdown,
};

namespace modloader {
    using shutdown_handler = void (*)();
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path base_path();

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

    template<typename T>
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

    template<typename T>
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

    struct ScopedGCHandleUntyped {
        explicit ScopedGCHandleUntyped(void* obj) {
            m_handle = il2cpp::gchandle_new(obj);
        }

        ScopedGCHandleUntyped(ScopedGCHandleUntyped const&) = delete;

        ScopedGCHandleUntyped(ScopedGCHandleUntyped&&) = delete;

        ~ScopedGCHandleUntyped() {
            il2cpp::gchandle_free(m_handle);
        }

        [[nodiscard]] void* get() const {
            return il2cpp::gchandle_target(m_handle);
        }

    private:
        gchandle m_handle;
    };

    template<typename T>
    struct ScopedGCHandle {
        explicit ScopedGCHandle(T* obj) :
            m_handle(obj) {
        }

        [[nodiscard]] T* get() {
            return static_cast<T*>(m_handle.get());
        }

    private:
        ScopedGCHandleUntyped m_handle;
    };

    class ILoggingHandler {
    public:
        virtual ~ILoggingHandler() = default;

        virtual void write(MessageType type, std::string const& group, std::string const& message) = 0;
    };

    IL2CPP_MODLOADER_DLLEXPORT common::EventBus<void, ModloaderEvent>& event_bus();

    IL2CPP_MODLOADER_DLLEXPORT std::shared_ptr<ILoggingHandler> register_logging_handler(std::shared_ptr<ILoggingHandler> handler);

    IL2CPP_MODLOADER_DLLEXPORT void debug(std::string const& group, std::string const& message);

    IL2CPP_MODLOADER_DLLEXPORT void info(std::string const& group, std::string const& message);

    IL2CPP_MODLOADER_DLLEXPORT void warn(std::string const& group, std::string const& message);

    IL2CPP_MODLOADER_DLLEXPORT void error(std::string const& group, std::string const& message);

    IL2CPP_MODLOADER_DLLEXPORT bool cursor_lock();

    IL2CPP_MODLOADER_DLLEXPORT bool cursor_lock(bool value);

    IL2CPP_MODLOADER_DLLEXPORT void add_shutdown_handler(shutdown_handler handler);

    IL2CPP_MODLOADER_DLLEXPORT void shutdown();

    IL2CPP_MODLOADER_DLLEXPORT extern std::atomic<bool> shutdown_requested;
} // namespace modloader
