#include <Modloader/app/methods/J2i/Net/XInputWrapper/XboxController.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/app/methods/UnityEngine/Cursor.h>
#include <Modloader/constants.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/bootstrap.h>
#include <Modloader/windows_api/common.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/file_logging_handler.h>

#include <filesystem>
#include <functional>
#include <semaphore>

#include <Common/settings.h>

//---------------------------------------------------Globals-----------------------------------------------------

#pragma clang diagnostic push

namespace modloader {
    // Have this here so it is included in the assembly and can be used to examine thrown exceptions.
    Il2CppExceptionWrapper ex;

    std::filesystem::path inner_base_path = "C:\\moon\\";
    std::filesystem::path modloader_config_path = "modloader_config.json";
    std::filesystem::path csv_path = "randomizer/inject_log.csv";
    std::atomic<bool> shutdown_requested = false;

    std::filesystem::path base_path() {
        return inner_base_path;
    }

    common::EventBus<void, ModloaderEvent>& event_bus() {
        static common::EventBus<void, ModloaderEvent> bus;
        return bus;
    }

    namespace {
        std::vector<std::weak_ptr<ILoggingHandler>> logging_handlers;
        std::vector<std::tuple<MessageType, std::string, std::string>> message_buffer;

        class BufferingHandler final : public ILoggingHandler {
        public:
            static constexpr int MAX_MESSAGES = 1000;
            std::mutex m_mutex;

            void write(MessageType type, std::string const& group, std::string const& message) override {
                std::lock_guard guard(m_mutex);
                message_buffer.emplace_back(type, group, message);
                while (message_buffer.size() > MAX_MESSAGES) {
                    message_buffer.erase(message_buffer.begin());
                }
            }
        };
    } // namespace

    std::shared_ptr<ILoggingHandler> register_logging_handler(std::shared_ptr<ILoggingHandler> handler) {
        logging_handlers.push_back(handler);
        for (auto [type, group, message]: message_buffer) {
            handler->write(type, group, message);
        }

        return handler;
    }

    void write_trace(const MessageType type, std::string const& group, std::string const& message) {
        for (auto it = logging_handlers.begin(); it != logging_handlers.end();) {
            if (it->expired()) {
                it = logging_handlers.erase(it);
                continue;
            }

            it->lock()->write(type, group, message);
            ++it;
        }
    }

    void trace(const MessageType type, std::string const& group, std::string const& message) {
        write_trace(type, group, message);
    }

    void debug(std::string const& group, std::string const& message) {
        trace(MessageType::Info, group, message);
    }

    void info(std::string const& group, std::string const& message) {
        trace(MessageType::Info, group, message);
    }

    void warn(std::string const& group, std::string const& message) {
        trace(MessageType::Warning, group, message);
    }

    void error(std::string const& group, std::string const& message) {
        trace(MessageType::Error, group, message);
    }

    bool attached = false;
    auto file_logger = register_logging_handler(std::make_shared<FileLoggingHandler>(base_path() / csv_path));
    auto buffered_handler = register_logging_handler(std::make_shared<BufferingHandler>());

    std::binary_semaphore wait_for_exit(0);
    IL2CPP_MODLOADER_C_DLLEXPORT void injection_entry(std::string const& path, const std::function<void()>& on_initialization_complete, const std::function<void(std::string_view)>& on_error) {
        inner_base_path = path;
        trace(MessageType::Info, "initialize", "Loading settings.");

        common::settings::Settings settings(base_path() / "settings.json");
        if (settings.get_boolean("Flags", "Dev", false)) {
            win::console::console_initialize();
        }

        trace(MessageType::Info, "initialize", "Loading mods.");
        if (!win::bootstrap::bootstrap()) {
            trace(MessageType::Info, "initialize", "Failed to bootstrap, shutting down.");
            shutdown_requested = true;
            on_error("Failed to bootstrap, shutting down.");
            win::common::force_exit(0);
        }

        trace(MessageType::Info, "initialize", "Performing intercepts.");
        interception::interception_init();

        il2cpp::load_all_types();
        event_bus().trigger_event(ModloaderEvent::InjectionComplete);

        on_initialization_complete();

        while (!shutdown_requested) {
            win::console::console_poll();
        }

        event_bus().trigger_event(ModloaderEvent::Shutdown);
        win::console::console_free();
        wait_for_exit.release();
    }

    IL2CPP_MODLOADER_DLLEXPORT bool cursor_lock() {
        return app::classes::UnityEngine::Cursor::get_lockState() == app::CursorLockMode__Enum::Confined;
    }

    IL2CPP_MODLOADER_DLLEXPORT bool cursor_lock(bool value) {
        const auto state = app::classes::UnityEngine::Cursor::get_lockState();
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
        // TODO: Make these not do weird things to our memory. (Crashes with a DEP violation)
        //win::bootstrap::bootstrap_shutdown();
        //win::common::free_library_and_exit_thread("Modloader.dll");
    }

    bool initialized = false;
    IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
        if (!initialized) {
            auto product = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_productName());
            auto version = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_version());
            auto unity_version = il2cpp::convert_csstring(app::classes::UnityEngine::Application::get_unityVersion());
            trace(MessageType::Info, "initialize", std::format("Initializing Application {} ({})[{}].", product, version, unity_version));

            trace(MessageType::Info, "initialize", "Calling initialization callbacks.");
            event_bus().trigger_event(ModloaderEvent::GameReady);
            initialized = true;
        }

        next::GameController::FixedUpdate(this_ptr);
    }
} // namespace modloader

#pragma clang diagnostic pop
