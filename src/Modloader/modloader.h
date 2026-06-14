#pragma once

#include <Common/event_bus.h>

#include <Modloader/constants.h>
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
    IL2CPP_MODLOADER_DLLEXPORT const std::filesystem::path& get_install_data_path();
    IL2CPP_MODLOADER_DLLEXPORT const std::filesystem::path& get_user_data_path();
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path get_install_data_path(const std::filesystem::path& relative_path);
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path get_user_data_path(const std::filesystem::path& relative_path);

    template<typename T>
    struct ScopedSetter {
        T& variable;
        T previous_value;

        /** Sets variable to value */
        inline static const std::function<T(const T&, const T&)> OP_SET = [](const T&, const T& value) { return value; };

        /** Sets variable to variable || value */
        inline static const std::function<T(const bool&, const bool&)> OP_OR = [](const bool& variable, const bool& value) { return variable || value; };

        ScopedSetter(T& variable, T value, std::function<T(const T&, const T&)> op = OP_SET) :
            variable(variable), previous_value(variable) {
            variable = op(variable, value);
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

    class ILoggingHandler {
    protected:
        LogLevel m_max_log_level = LogLevel::Debug;

        virtual void write_internal(LogLevel level, std::string const& group, std::string const& message) = 0;

    public:
        explicit ILoggingHandler(const LogLevel max_log_level) : m_max_log_level(max_log_level) {}
        virtual ~ILoggingHandler() = default;

        void write(LogLevel level, std::string const& group, std::string const& message);
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

    IL2CPP_MODLOADER_DLLEXPORT bool is_game_ready();

    IL2CPP_MODLOADER_DLLEXPORT extern std::atomic<bool> shutdown_requested;
} // namespace modloader
