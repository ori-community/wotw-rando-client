#include <app/methods/GameController.h>
#include <app/methods/J2i/Net/XInputWrapper/XboxController.h>
#include <app/methods/UnityEngine/Application.h>
#include <app/methods/UnityEngine/Cursor.h>
#include <constants.h>
#include <il2cpp_helpers.h>
#include <interception_macros.h>
#include <macros.h>
#include <modloader.h>
#include <windows_api/bootstrap.h>
#include <windows_api/common.h>
#include <windows_api/console.h>

#include <filesystem>
#include <fstream>
#include <functional>
#include <utility>

#include <mutex>
#include <semaphore>

#include <Common/csv.h>
#include <Common/ext.h>
#include <Common/settings_reader.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/app/methods/UnityEngine/Cursor.h>
#include <INIReader.h>

//---------------------------------------------------Globals-----------------------------------------------------

#pragma clang diagnostic push

namespace modloader {
    // Have this here so it is included in the assembly and can be used to examine thrown exceptions.
    Il2CppExceptionWrapper ex;

    std::filesystem::path inner_base_path = "C:\\moon\\";
    std::filesystem::path modloader_config_path = "modloader_config.json";
    std::filesystem::path csv_path = "inject_log.csv";
    std::atomic<bool> shutdown_requested = false;

    std::filesystem::path base_path() {
        return inner_base_path;
    }

    common::EventBus<void, ModloaderEvent>& event_bus() {
        static common::EventBus<void, ModloaderEvent> bus;
        return bus;
    }

    namespace {
        bool write_to_csv = true;
        bool flush_after_every_line = true;
        std::ofstream csv_file;
        std::mutex csv_mutex;

        void initialize_trace_file() {
            if (!write_to_csv) {
                return;
            }

            csv_file.open(base_path() / csv_path);
            write_to_csv = csv_file.is_open();

            if (write_to_csv) {
                std::lock_guard guard(csv_mutex);
                if (flush_after_every_line) {
                    csv_file << "type, group, level, message," << std::endl;
                } else {
                    csv_file << "type, group, level, message,\n";
                }
            }
        }
    } // namespace

    void write_trace(MessageType type, int level, std::string const& group, std::string const& message) {
        if (!write_to_csv) {
            return;
        }

        std::string sanitized_group = csv::sanitize_csv_field(group);
        std::string sanitized_message = csv::sanitize_csv_field(message);

        std::string line = fmt::format(
            "{}, [{}], {}, {},",
            static_cast<int>(type),
            sanitized_group,
            level,
            sanitized_message
        );

        std::lock_guard guard(csv_mutex);
        if (flush_after_every_line) {
            csv_file << line << std::endl;
        } else {
            csv_file << line << "\n";
        }
    }

    void trace(MessageType type, int level, std::string const& group, std::string const& message) {
        write_trace(type, level, group, message);
    }

    void info(std::string const& group, std::string const& message) {
        trace(MessageType::Info, 4, group, message);
    }

    void warn(std::string const& group, std::string const& message) {
        trace(MessageType::Warning, 3, group, message);
    }

    void debug(std::string const& group, std::string const& message) {
        trace(MessageType::Debug, 5, group, message);
    }

    bool attached = false;

    std::binary_semaphore wait_for_exit(0);
    IL2CPP_MODLOADER_C_DLLEXPORT void injection_entry(std::string const& path, const std::function<void()>& on_initialization_complete, const std::function<void(std::string_view)>& on_error) {
        inner_base_path = path;
        trace(MessageType::Info, 5, "initialize", "Loading settings.");

        auto settings = read_utf16_ini((base_path() / "settings.ini").string());

        initialize_trace_file();
        trace(MessageType::Info, 5, "initialize", "Mod Loader initialization.");

        if (settings->GetBoolean("Flags", "Dev", false)) {
            trace(MessageType::Info, 5, "initialize", "Initializing console.");
            win::console::console_initialize();
        }

        trace(MessageType::Info, 5, "initialize", "Loading mods.");
        if (!win::bootstrap::bootstrap()) {
            trace(MessageType::Info, 5, "initialize", "Failed to bootstrap, shutting down.");
            csv_file.close();
            shutdown_requested = true;
            on_error("Failed to bootstrap, shutting down.");
            win::common::free_library_and_exit_thread("Modloader.dll");
        }

        trace(MessageType::Info, 5, "initialize", "Performing intercepts.");
        interception::interception_init();

        il2cpp::load_all_types();

        event_bus().trigger_event(ModloaderEvent::InjectionComplete);

        on_initialization_complete();

        while (!shutdown_requested) {
            win::console::console_poll();
        }

        modloader::win::console::console_free();
        if (write_to_csv) {
            csv_file.close();
        }

        wait_for_exit.release();
    }

    IL2CPP_MODLOADER_DLLEXPORT bool cursor_lock() {
        return app::classes::UnityEngine::Cursor::get_lockState() == app::CursorLockMode__Enum::Confined;
    }

    IL2CPP_MODLOADER_DLLEXPORT bool cursor_lock(bool value) {
        auto state = app::classes::UnityEngine::Cursor::get_lockState();
        app::classes::UnityEngine::Cursor::set_lockState(
            value ? app::CursorLockMode__Enum::Confined : app::CursorLockMode__Enum::None
        );
        return state == app::CursorLockMode__Enum::None;
    }

    void shutdown() {
        shutdown_requested = true;
        app::classes::J2i::Net::XInputWrapper::XboxController::StopPolling();
        wait_for_exit.acquire();
        interception::interception_detach();
        win::bootstrap::bootstrap_shutdown();
        win::common::free_library_and_exit_thread("Modloader.dll");
    }

    bool initialized = false;
    IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
        if (!initialized) {
            auto product = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_productName());
            auto version = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_version());
            auto unity_version = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_unityVersion());
            trace(MessageType::Info, 5, "initialize", fmt::format("Initializing Application {} ({})[{}].", product, version, unity_version));

            trace(MessageType::Info, 5, "initialize", "Calling initialization callbacks.");
            event_bus().trigger_event(ModloaderEvent::GameReady);
            initialized = true;
        }

        next::GameController::FixedUpdate(this_ptr);
    }
} // namespace modloader

#pragma clang diagnostic pop