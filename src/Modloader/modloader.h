#pragma once

#include <Common/scope_utils.h>
#include <Common/event_bus.h>
#include <Modloader/constants.h>
#include <Modloader/macros.h>
#include <atomic>
#include <filesystem>
#include <string>


namespace modloader {
    namespace events {
        struct InjectionComplete {};
        struct InitializeUberStates {};
        struct GameReady {};
        struct Shutdown {};

        using bus_t = common::EventBus<
            InjectionComplete,
            InitializeUberStates,
            GameReady,
            Shutdown
        >;
    }

    using shutdown_handler = void (*)();
    IL2CPP_MODLOADER_DLLEXPORT const std::filesystem::path& get_install_data_path();
    IL2CPP_MODLOADER_DLLEXPORT const std::filesystem::path& get_user_data_path();
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path get_install_data_path(const std::filesystem::path& relative_path);
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path get_user_data_path(const std::filesystem::path& relative_path);

    class ILoggingHandler {
    protected:
        LogLevel m_max_log_level = LogLevel::Debug;

        virtual void write_internal(LogLevel level, std::string const& group, std::string const& message) = 0;

    public:
        explicit ILoggingHandler(const LogLevel max_log_level) : m_max_log_level(max_log_level) {}
        virtual ~ILoggingHandler() = default;

        void write(LogLevel level, std::string const& group, std::string const& message);
    };

    IL2CPP_MODLOADER_DLLEXPORT events::bus_t& event_bus();

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

    IL2CPP_MODLOADER_DLLEXPORT bool are_uber_states_initialized();

    IL2CPP_MODLOADER_DLLEXPORT extern std::atomic<bool> shutdown_requested;
} // namespace modloader
