// dllmain.cpp : Defines the entry point for the DLL application.

#include <common.h>
#include <constants.h>
#include <il2cpp_helpers.h>
#include <interception_macros.h>
#include <macros.h>
#include <windows_api/bootstrap.h>
#include <windows_api/common.h>
#include <windows_api/console.h>

#include <fstream>
#include <string>
#include <utility>

#include <mutex>

#include <Common/csv.h>
#include <Common/ext.h>
#include <Common/settings.h>
#include <app/methods/GameController.h>
#include <app/methods/UnityEngine/Application.h>
#include <app/methods/UnityEngine/Cursor.h>

//---------------------------------------------------Globals-----------------------------------------------------

using namespace modloader::win;

namespace modloader {
    // Have this here so it is included in the assembly and can be used to examine thrown exceptions.
    Il2CppExceptionWrapper ex;

    std::string base_path = "C:\\moon\\";
    std::string modloader_path = "modloader_config.json";
    std::string csv_path = "inject_log.csv";
    bool shutdown_thread = false;

    namespace {
        bool write_to_csv = true;
        bool flush_after_every_line = true;
        std::ofstream csv_file;
        std::mutex csv_mutex;

        void initialize_trace_file() {
            if (!write_to_csv)
                return;

            csv_file.open(base_path + csv_path);
            write_to_csv = csv_file.is_open();

            if (write_to_csv) {
                csv_mutex.lock();
                if (flush_after_every_line)
                    csv_file << "type, group, level, message," << std::endl;
                else
                    csv_file << "type, group, level, message,\n";
                csv_mutex.unlock();
            }
        }

        Initialization* start = nullptr;
        void run_initialization_callbacks(InitializationType type) {
            auto it = start;
            while (it != nullptr) {
                if (it->when == type) {
                    it->call();
                }
                it = it->next;
            }
        }
    } // namespace

    void write_trace(MessageType type, int level, std::string const& group, std::string const& message) {
        if (!write_to_csv)
            return;

        std::string sanitized_group = csv::sanitize_csv_field(group);
        std::string sanitized_message = csv::sanitize_csv_field(message);

        std::string line = fmt::format(
                "{}, [{}], {}, {},",
                static_cast<int>(type),
                sanitized_group,
                level,
                sanitized_message
        );

        csv_mutex.lock();
        if (flush_after_every_line)
            csv_file << line << std::endl;
        else
            csv_file << line << "\n";
        csv_mutex.unlock();
    }

    IL2CPP_MODLOADER_DLLEXPORT void trace(MessageType type, int level, std::string const& group, std::string const& message) {
        write_trace(type, level, group, message);
    }

    IL2CPP_MODLOADER_DLLEXPORT void info(std::string const& group, std::string const& message) {
        trace(MessageType::Info, 4, group, message);
    }

    IL2CPP_MODLOADER_DLLEXPORT void warn(std::string const& group, std::string const& message) {
        trace(MessageType::Warning, 3, group, message);
    }

    IL2CPP_MODLOADER_DLLEXPORT void debug(std::string const& group, std::string const& message) {
        trace(MessageType::Debug, 5, group, message);
    }

    Initialization::Initialization(Initialization::init p_call, InitializationType when) :
            next(start), call(p_call), when(when) {
        start = this;
    }

    bool attached = false;

    IL2CPP_MODLOADER_C_DLLEXPORT void injection_entry(std::string path) {
        base_path = path;
        trace(MessageType::Info, 5, "initialize", "Loading settings.");
        auto settings = create_randomizer_settings(base_path);
        load_settings_from_file(settings);
        auto wait_for_debugger = check_option(settings, "Flags", "WaitForDebugger", false);
        while (wait_for_debugger && !common::is_debugger_present())
            common::sleep(100); // to avoid 100% CPU load

        initialize_trace_file();
        trace(MessageType::Info, 5, "initialize", "Mod Loader initialization.");

        if (check_option(settings, "Flags", "Dev", false)) {
            trace(MessageType::Info, 5, "initialize", "Initializing console.");
            console::console_initialize();
        }

        trace(MessageType::Info, 5, "initialize", "Loading mods.");
        if (!bootstrap::bootstrap()) {
            trace(MessageType::Info, 5, "initialize", "Failed to bootstrap, shutting down.");
            csv_file.close();
            shutdown_thread = true;
            common::free_library_and_exit_thread("Modloader.dll");
        }

        trace(MessageType::Info, 5, "initialize", "Performing intercepts.");
        interception::interception_init();

        il2cpp::load_all_types();

        run_initialization_callbacks(InitializationType::OnInjectionComplete);

        auto product = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_productName());
        auto version = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_version());
        auto unity_version = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_unityVersion());
        trace(MessageType::Info, 5, "initialize", fmt::format("Application {} injected ({})[{}].", product, version, unity_version));

        while (!shutdown_thread) {
            console::console_poll();
        }

        console::console_free();

        if (write_to_csv)
            csv_file.close();

        interception::interception_detach();
        bootstrap::bootstrap_shutdown();
        common::free_library_and_exit_thread("Modloader.dll");
    }

    IL2CPP_MODLOADER_C_DLLEXPORT bool toggle_cursorlock() {
        auto state = app::classes::UnityEngine::Cursor::get_lockState();
        app::classes::UnityEngine::Cursor::set_lockState(
                state == app::CursorLockMode__Enum::None ? app::CursorLockMode__Enum::Confined : app::CursorLockMode__Enum::None
        );
        return state == app::CursorLockMode__Enum::None;
    }

    IL2CPP_MODLOADER_C_DLLEXPORT const char* get_base_path() {
        return base_path.c_str();
    }

    IL2CPP_MODLOADER_DLLEXPORT void shutdown() {
        shutdown_thread = true;
    }

    bool initialized = false;
    IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
        if (!initialized) {
            trace(MessageType::Info, 5, "initialize", "Calling initialization callbacks.");
            run_initialization_callbacks(InitializationType::OnGameReady);
            initialized = true;
        }

        next::GameController::FixedUpdate(this_ptr);
    }
} // namespace modloader
