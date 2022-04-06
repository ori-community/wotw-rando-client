// dllmain.cpp : Defines the entry point for the DLL application.

#include <common.h>
#include <console.h>
#include <constants.h>
#include <interception_macros.h>
#include <macros.h>
#include <il2cpp_helpers.h>

#include <string>
#include <functional>
#include <iostream>
#include <unordered_map>
#include <set>
#include <fstream>
#include <utility>

#include <mutex>

#include <Common/csv.h>
#include <Common/ext.h>
#include <Common/settings.h>

#include <WinNetwork/binary_walker.h>
#include <WinNetwork/peer.h>

//---------------------------------------------------Globals-----------------------------------------------------

namespace modloader
{
    // Have this here so it is included in the assembly and can be used to examine thrown exceptions.
    Il2CppExceptionWrapper ex;

    std::string base_path = "C:\\moon\\";
    std::string mod_title = "Randomizer";
    std::string modloader_path = "modloader_config.json";
    std::string csv_path = "inject_log.csv";
    bool shutdown_thread = false;

    namespace
    {
        bool trace_enabled = false;
        // if you are debugging and don't want the trace client to be dropped set this to false.
        bool trace_pinging_enabled = true;

        network::NetworkData network_data;
        int peer_id = -1;
        std::mutex network_mutex;

        bool write_to_csv = true;
        bool flush_after_every_line = true;
        std::ofstream csv_file;
        std::mutex csv_mutex;

        void initialize_trace_file()
        {
            if (!write_to_csv)
                return;

            csv_file.open(base_path + csv_path);
            write_to_csv = csv_file.is_open();

            if (write_to_csv)
            {
                csv_mutex.lock();
                if (flush_after_every_line)
                    csv_file << "type, group, level, message," << std::endl;
                else
                    csv_file << "type, group, level, message,\n";
                csv_mutex.unlock();
            }
        }

        void network_event_handler(network::NetworkEvent const& evt)
        {
            using namespace network;
            using namespace network::binary;

            switch (evt.type)
            {
            case network::NetworkEventType::Package:
            {
                BinaryWalker walker;
                walker.cursor = 0;
                walker.data = evt.data;
                walker.size = evt.size;

                auto type = read_bw<PackageType>(walker);
                switch (type)
                {
                case network::PackageType::Message:
                {

                    break;
                }
                default:
                    break;
                }
                break;
            }
            case network::NetworkEventType::Connected:
            {
                peer_id = evt.peer_id;

                constexpr int BUFFER_SIZE = 64;
                char buffer[BUFFER_SIZE];
                BinaryWalker walker;
                walker.cursor = 0;
                walker.data = buffer;
                walker.size = BUFFER_SIZE;

                write_bw(walker, 0);
                write_bw(walker, PackageType::Identifier);
                write_str_bw(walker, mod_title);
                auto size = walker.cursor;
                walker.cursor = 0;
                write_bw(walker, size - static_cast<int>(sizeof(int)));

                network_mutex.lock();
                send_data(network_data, peer_id, walker.data, size);
                if (!trace_pinging_enabled)
                    set_pinging(network_data, peer_id, false);

                network_mutex.unlock();
                break;
            }
            case network::NetworkEventType::Disconnected:
                peer_id = -1;
                break;
            default:
                break;
            }
        }

        Initialization* start = nullptr;
        void initialization_callbacks()
        {
            auto it = start;
            while (it != nullptr)
            {
                it->call();
                it = it->next;
            }
        }
    }

    void write_trace(MessageType type, int level, std::string const& group, std::string const& message)
    {
        if (!write_to_csv)
            return;

        std::string sanitized_group = csv::sanitize_csv_field(group);
        std::string sanitized_message = csv::sanitize_csv_field(message);

        std::string line = format(
            "%d, [%s], %d, %s,",
            type,
            sanitized_group.c_str(),
            level,
            sanitized_message.c_str()
        );

        csv_mutex.lock();
        if (flush_after_every_line)
            csv_file << line << std::endl;
        else
            csv_file << line << "\n";
        csv_mutex.unlock();
    }

    IL2CPP_MODLOADER_DLLEXPORT void send_trace(MessageType type, int level, std::string const& group, std::string const& message)
    {
        // TODO: Maybe buffer these until we connect?
        if (peer_id < 0)
            return;

        using namespace network::binary;

        constexpr int BUFFER_SIZE = 512;
        char buffer[BUFFER_SIZE];

        BinaryWalker walker;
        walker.cursor = 0;
        walker.data = buffer;
        walker.size = BUFFER_SIZE;

        write_bw(walker, 0);
        write_bw(walker, network::PackageType::TraceMessage);
        write_bw(walker, type);
        write_bw(walker, level);
        write_str_bw(walker, group);
        write_str_bw(walker, message);
        auto size = walker.cursor;
        walker.cursor = 0;
        write_bw(walker, size - static_cast<int>(sizeof(int)));

        network_mutex.lock();
        network::send_data(network_data, peer_id, walker.data, size);
        network_mutex.unlock();
    }

    IL2CPP_MODLOADER_DLLEXPORT void trace(MessageType type, int level, std::string const& group, std::string const& message)
    {
        send_trace(type, level, group, message);
        write_trace(type, level, group, message);
    }

    IL2CPP_MODLOADER_DLLEXPORT void info(std::string const& group, std::string const& message)
    {
        trace(MessageType::Info, 4, group, message);
    }

    IL2CPP_MODLOADER_DLLEXPORT void warn(std::string const& group, std::string const& message)
    {
        trace(MessageType::Warning, 3, group, message);
    }

    IL2CPP_MODLOADER_DLLEXPORT void debug(std::string const& group, std::string const& message)
    {
        trace(MessageType::Debug, 5, group, message);
    }

    Initialization::Initialization(Initialization::init p_call)
        : next(start)
        , call(p_call)
    {
        start = this;
    }

    bool attached = false;

    extern bool bootstrap();
    extern void bootstrap_shutdown();

    STATIC_IL2CPP_BINDING(UnityEngine, Application, app::String*, get_version, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Application, app::String*, get_unityVersion, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Application, app::String*, get_productName, ());
    
    IL2CPP_MODLOADER_C_DLLEXPORT void injection_entry(std::string path)
    {
        base_path = path;
        trace(MessageType::Info, 5, "initialize", "Loading settings.");
        auto settings = create_randomizer_settings(base_path);
        load_settings_from_file(settings);
        auto wait_for_debugger = check_option(settings, "Flags", "WaitForDebugger", false);
        while (wait_for_debugger && !::IsDebuggerPresent())
            ::Sleep(100); // to avoid 100% CPU load

        initialize_trace_file();
        trace(MessageType::Info, 5, "initialize", "Mod Loader initialization.");

        trace_enabled = check_option(settings, "Flags", "TraceEnabled", false);
        trace_pinging_enabled = !check_option(settings, "Flags", "TracePingingDisabled", true);
        if (trace_enabled)
        {
            trace(MessageType::Info, 5, "initialize", "Initializing network tracing.");
            network_data.is_server = false;
            network_data.ip = "localhost";
            network_data.port = 27666;
            network_data.logging_callback = [](std::string const& str) { trace(MessageType::Info, 4, "network", str); };
            network_data.event_handler = &network_event_handler;

            network::initialize_peer(network_data);
            network::start_peer(network_data);
        }

        if (check_option(settings, "Flags", "Dev", false))
        {
            trace(MessageType::Info, 5, "initialize", "Initializing console.");
            console::console_initialize();
        }

        trace(MessageType::Info, 5, "initialize", "Loading mods.");
        if (!bootstrap())
        {
            trace(MessageType::Info, 5, "initialize", "Failed to bootstrap, shutting down.");
            csv_file.close();
            shutdown_thread = true;
            FreeLibraryAndExitThread(GetModuleHandleA("Il2CppModLoader.dll"), 0);
        }

        trace(MessageType::Info, 5, "initialize", "Performing intercepts.");
        intercept::interception_init();

        il2cpp::load_all_types();

        auto product = il2cpp::convert_csstring(Application::get_productName());
        auto version = il2cpp::convert_csstring(Application::get_version());
        auto unity_version = il2cpp::convert_csstring(Application::get_unityVersion());
        trace(MessageType::Info, 5, "initialize", format(
            "Application %s injected (%s)[%s].", product.c_str(), version.c_str(), unity_version.c_str()));

        while (!shutdown_thread)
        {
            console::console_poll();
            if (trace_enabled)
                network::poll_peer(network_data);
        }

        console::console_free();
        if (trace_enabled)
            network::shutdown_peer(network_data);

        if (write_to_csv)
            csv_file.close();

        intercept::interception_detach();
        bootstrap_shutdown();
        FreeLibraryAndExitThread(GetModuleHandleA("Il2CppModLoader.dll"), 0);
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Cursor, int32_t, get_lockState, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Cursor, void, set_lockState, (int32_t value));

    IL2CPP_MODLOADER_C_DLLEXPORT bool toggle_cursorlock()
    {
        int32_t newState = 2 - Cursor::get_lockState();
        Cursor::set_lockState(newState);
        return newState > 0;
    }

    IL2CPP_MODLOADER_C_DLLEXPORT const char* get_base_path()
    {
        return base_path.c_str();
    }

    IL2CPP_MODLOADER_DLLEXPORT void shutdown()
    {
        shutdown_thread = true;
    }

    bool initialized = false;
    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
        if (!initialized) {
            trace(MessageType::Info, 5, "initialize", "Calling initialization callbacks.");
            initialization_callbacks();
            initialized = true;
        }

        GameController::FixedUpdate(this_ptr);
    }
}
