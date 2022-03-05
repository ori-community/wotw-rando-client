#define WIN32_LEAN_AND_MEAN

#include <ipc.h>

#include <dll_main.h>
#include <csharp_bridge.h>
#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <features/messages.h>
#include <uber_states/uber_state_manager.h>
#include <input/rando_bindings.h>
#include <input/simulator.h>

#include <windows.h>
#include <stdio.h> 
#include <tchar.h>
#include <strsafe.h>

#include <array>
#include <iostream>
#include <mutex>
#include <string>
#include <vector>
#include <json/json.hpp>

using namespace modloader;

namespace ipc
{
#define SYNCHRONOUS 1
#if SYNCHRONOUS == 1
    namespace
    {
        constexpr int MESSAGE_SIZE = 8192;
        constexpr int SEND_QUEUE_LIMIT = 300;

        std::thread ipc_thread;
        std::mutex message_mutex;
        std::mutex send_mutex;
        std::vector<std::string> sends;
        std::vector<std::string> messages;

        HANDLE connect(int buffer_size)
        {
            HANDLE pipe = CreateNamedPipeA(
                "\\\\.\\pipe\\wotw_rando",
                PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT | PIPE_REJECT_REMOTE_CLIENTS,
                1,
                0,
                buffer_size * sizeof(char),
                0,
                nullptr
            );

            if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE)
            {
                warn("ipc", "Failed to create pipe.");
                CloseHandle(pipe);
                return nullptr;
            }

            auto result = ConnectNamedPipe(pipe, nullptr);
            if (!result)
            {
                warn("ipc", "Failed to connect to pipe.");
                CloseHandle(pipe);
                return nullptr;
            }

            return pipe;
        }

        void disconnect(HANDLE pipe)
        {
            CloseHandle(pipe);
        }

        void pipe_handler()
        {
            DWORD bytes_read = 0;
            DWORD bytes_written = 0;
            std::array<char, MESSAGE_SIZE> message;
            HANDLE pipe = connect(message.size() - 1);
            if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE)
                return;

            while (!shutdown_thread)
            {
                DWORD bytes_available = 0;
                if (!PeekNamedPipe(pipe, nullptr, 0, nullptr, &bytes_available, nullptr))
                {
                    auto error = GetLastError();
                    if (error == ERROR_BROKEN_PIPE ||
                        error == ERROR_PIPE_NOT_CONNECTED ||
                        error == ERROR_INVALID_HANDLE)
                    {
                        warn("ipc", format("Failed to peek at pipe (%d).", error));
                        disconnect(pipe);
                        pipe = connect(message.size() - 1);
                        if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE)
                        {
                            warn("ipc", "Failed to reconnect pipe, returning.");
                            return;
                        }
                    }
                }

                if (bytes_available != 0)
                {
                    auto result = ReadFile(
                        pipe,
                        message.data(),
                        message.size() - 1,
                        &bytes_read,
                        nullptr
                    );

                    if (!result || bytes_read == 0)
                    {
                        auto error = GetLastError();
                        warn("ipc", format("Failed to read data (%d).", error));
                    }
                    else
                    {
                        message[bytes_read] = '\0';
                        std::string str = message.data();
                        trim(str);
                        message_mutex.lock();
                        messages.push_back(std::move(str));
                        message_mutex.unlock();
                    }
                }
                else
                {
                    send_mutex.lock();
                    auto local_sends = sends;
                    sends.clear();
                    send_mutex.unlock();
                    for (auto message : local_sends)
                    {
                        auto result = WriteFile(
                            pipe,
                            message.data(),
                            message.size(),
                            &bytes_written,
                            nullptr
                        );

                        if (!result || bytes_written == 0)
                        {
                            auto error = GetLastError();
                            warn("ipc", format("Failed to write data (%d).", error));
                        }
                    }
                }
            }

            disconnect(pipe);
        }

        void start_ipc_thread()
        {
            ipc_thread = std::thread(pipe_handler);
        }

        CALL_ON_INIT(start_ipc_thread);
    }

    using message_handler = void(*)(nlohmann::json& j);
    std::unordered_map<std::string, message_handler> handlers;

    void join_ipc_thread()
    {
        if (ipc_thread.joinable())
            ipc_thread.join();
    }

    void update_pipe()
    {
        message_mutex.lock();
        auto local_messages = messages;
        messages.clear();
        message_mutex.unlock();

        for (auto const& message : local_messages)
        {
            try
            {
                auto j = nlohmann::json::parse(message);
                auto it = handlers.find(j.at("method").get<std::string>());
                if (it != handlers.end())
                    it->second(j);
                else
                    info("ipc", format("Received unknown action request: %s", message.c_str()));
            }
            catch (std::exception ex)
            {
                warn("ipc", "Error parsing ipc message.");
                info("ipc", ex.what());
                info("ipc", message);
            }
        }
    }

    void send_message(std::string_view message)
    {
        send_mutex.lock();
        if (sends.size() < SEND_QUEUE_LIMIT)
            sends.push_back(std::string(message));
        else
            warn("ipc", "Send queue limit reached.");
        send_mutex.unlock();
    }

    void reload(nlohmann::json& j)
    {
        info("ipc", "Received reload action request.");
        csharp_bridge::on_action_triggered(input::Action::Reload);
    }

    void get_flags(nlohmann::json& j)
    {
        std::vector<std::string> values;
        auto count = csharp_bridge::get_flag_count();
        constexpr int size = 256;
        wchar_t buffer[size];
        for (int i = 0; i < count; ++i)
        {
            memset(buffer, 0, size);
            csharp_bridge::get_flag(i, buffer, size - 1);
            values.push_back(convert_wstring_to_string(buffer));
        }

        nlohmann::json response;
        response["type"] = "response";
        response["id"] = j.at("id").get<int>();
        response["payload"] = values;
        send_message(response.dump());
    }

    void get_uberstates(nlohmann::json& j)
    {
        std::vector<float> values;
        for (auto entry : j.at("payload"))
        {
            auto group = entry.at("group").get<int>();
            auto state = entry.at("state").get<int>();
            values.push_back(uber_states::get_uber_state_value(group, state));
        }

        nlohmann::json response;
        response["type"] = "response";
        response["id"] = j.at("id").get<int>();
        response["payload"] = values;
        send_message(response.dump());
    }

    void set_uberstate(nlohmann::json& j)
    {
        auto p = j.at("payload");
        auto group = p.at("group").get<int>();
        auto state = p.at("state").get<int>();
        auto value = p.at("value").get<double>();
        uber_states::set_uber_state_value(group, state, value);
    }

    void action(nlohmann::json& j)
    {
        auto p = j.at("payload");
        auto id = p.at("action_id").get<input::Action>();
        auto pressed = p.at("pressed").get<bool>();
        if (pressed)
            action_pressed(id);
        else
            action_released(id);
    }

    void set_velocity(nlohmann::json& j)
    {
        auto p = j.at("payload");
        auto x = p.at("x").get<float>();
        auto y = p.at("y").get<float>();
        auto z = p.at("z").get<float>();
        auto sein = get_sein();
        if (sein != nullptr)
        {
            auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
            speed.x = x;
            speed.y = y;
            speed.z = z;
        }
    }

    void get_velocity(nlohmann::json& j)
    {
        app::Vector3 v;
        nlohmann::json response;
        response["type"] = "response";
        response["id"] = j.at("id").get<int>();

        auto sein = get_sein();
        if (sein != nullptr)
            v = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;

        response["payload"]["x"] = v.x;
        response["payload"]["y"] = v.y;
        response["payload"]["z"] = v.z;
        send_message(response.dump());
    }

    void message(nlohmann::json& j)
    {
        auto p = j.at("payload");
        auto message_id = 0;
        if (!p.contains("message_id"))
        {
            auto message_id = get_free_id();
            float fadein = p.value("fadein", 0.5f);
            float fadeout = p.value("fadeout", 0.5f);
            bool should_show_box = p.value("should_show_box", false);
            bool should_play_sound = p.value("should_play_sound", false);

            text_box_create(message_id, fadein, fadeout, should_show_box, should_play_sound);

            nlohmann::json response;
            response["type"] = "response";
            response["id"] = j.at("id").get<int>();
            response["message_id"] = message_id;
            send_message(response.dump());
        }
        else
        {
            message_id = p.at("message_id").get<int>();
            if (p.contains("destroy") && p.at("destroy").get<bool>())
            {
                text_box_destroy(message_id);
                return;
            }
        }

        if (p.contains("text"))
            text_box_text(message_id, convert_string_to_wstring(p.at("text").get<std::string>()).c_str());
        if (p.contains("position"))
        {
            auto pos = p.at("position");
            auto screen_position = p.value("screen_position", ScreenPosition::MiddleCenter);
            app::Vector3 position;
            get_screen_position(screen_position, &position);
            position.x += pos.at("x").get<float>();
            position.y += pos.at("y").get<float>();
            position.z += pos.at("z").get<float>();
            text_box_position(message_id, position.x, position.y, position.z);
        }
        if (p.contains("color"))
        {
            auto color = p.at("color");
            text_box_color(message_id, color.at("r").get<int>(), color.at("g").get<int>(), color.at("b").get<int>(), color.at("a").get<int>());
        }
        if (p.contains("alignment"))
            text_box_alignment(message_id, p.at("text").get<app::AlignmentMode__Enum>());
        if (p.contains("anchor"))
            text_box_anchor(message_id,
                p.value("horizontal", app::HorizontalAnchorMode__Enum_Center),
                p.value("vertical", app::VerticalAnchorMode__Enum_Middle));
        if (p.contains("line_spacing"))
            text_box_line_spacing(message_id, p.at("line_spacing").get<float>());
        if (p.contains("visible"))
            text_box_visibility(message_id, p.at("visible").get<bool>());

    }

    void initialize()
    {
        handlers["reload"] = reload;
        handlers["get_uberstates"] = get_uberstates;
        handlers["set_uberstate"] = set_uberstate;
        handlers["get_flags"] = get_flags;
        handlers["action"] = action;
        handlers["set_velocity"] = set_velocity;
        handlers["get_velocity"] = get_velocity;
        handlers["message"] = message;

        for (auto action = static_cast<input::Action>(0); action < input::Action::TOTAL; action = static_cast<input::Action>(static_cast<int>(action) + 1))
        {
            input::add_on_pressed_callback(action, report_input);
            input::add_on_released_callback(action, report_input);
        }
    }

    CALL_ON_INIT(initialize);
#else
    namespace
    {
        enum class State
        {
            Initialize,
            StartConnect,
            Connected,
            Reading,
            ReadFinished,
            Disconnected,
            Errored
        };

        State state = State::Initialize;
        HANDLE pipe = INVALID_HANDLE_VALUE;
        DWORD bytes_read;
        OVERLAPPED overlapped;
        std::array<char, 64> message;

        void process_message(std::string request)
        {
            if (request == "reload")
            {
                info("ipc", "Received reload action request.");
                csharp_bridge::on_action_triggered(input::Action::Reload);
            }
        }
    }

    void update_pipe()
    {
        if (state == State::Initialize)
        {
            pipe = CreateNamedPipeW(
                L"\\\\.\\pipe\\wotw_rando",
                PIPE_ACCESS_INBOUND | FILE_FLAG_FIRST_PIPE_INSTANCE | FILE_FLAG_OVERLAPPED,
                PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT | PIPE_REJECT_REMOTE_CLIENTS,
                1,
                message.size() * sizeof(char),
                message.size() * sizeof(char),
                0,
                nullptr
            );

            overlapped = {};
            overlapped.hEvent = CreateEventW(NULL, FALSE, TRUE, NULL);
            state = State::StartConnect;
            bytes_read = 0;
        }
        else if (state == State::Errored)
            return;

        int wait = WaitForSingleObject(overlapped.hEvent, 0);
        if (wait == WAIT_OBJECT_0)
        {
            bool blocking = false;
            while (!blocking)
            {
                switch (state)
                {
                case State::StartConnect:
                    info("ipc", "Connecting to pipe.");
                    if (ConnectNamedPipe(pipe, &overlapped))
                        state = State::Connected;
                    else
                    {
                        int err = GetLastError();
                        if (err == ERROR_IO_PENDING)
                        {
                            state = State::Connected;
                            blocking = true;
                        }
                        else if (err == ERROR_PIPE_CONNECTED)
                            state = State::Connected;
                        else if (err != ERROR_SUCCESS) // waiting for pipe connection.
                        {
                            warn("ipc", format("Encountered error while connecting (%d).", err));
                            state = State::Errored;
                        }
                    }
                    break;
                case State::Connected:
                    if (ReadFile(pipe, message.data(), message.size(), &bytes_read, &overlapped))
                        state = State::ReadFinished;
                    else
                    {
                        int err = GetLastError();
                        if (err == ERROR_IO_PENDING)
                        {
                            state = State::Reading;
                            blocking = true;
                        }
                        else if (err == ERROR_BROKEN_PIPE)
                            state = State::Disconnected;
                        else
                        {
                            warn("ipc", format("Encountered error while starting read (%d).", err));
                            state = State::Errored;
                        }
                    }
                    break;
                case State::Reading:
                    if (GetOverlappedResult(pipe, &overlapped, &bytes_read, TRUE))
                        state = State::ReadFinished;
                    else
                    {
                        int err = GetLastError();
                        if (err == ERROR_BROKEN_PIPE)
                            state = State::Disconnected;
                        else
                        {
                            warn("ipc", format("Encountered error while reading (%d).", err));
                            state = State::Errored;
                        }
                    }
                    break;
                case State::ReadFinished:
                    info("ipc", "Command read from pipe.");
                    message[bytes_read + 1] = '\0';
                    process_message(message.data());
                    state = State::Connected;
                    break;
                case State::Disconnected:
                    info("ipc", "Pipe disconnected.");
                    DisconnectNamedPipe(pipe);
                    state = State::StartConnect;
                    break;
                }
            }
        }
        else if (wait != WAIT_TIMEOUT)
        {
            warn("ipc", format("Encountered error while waiting (%d).", wait));
            state = State::Errored;
        }
    }
#endif
    
    NLOHMANN_JSON_SERIALIZE_ENUM(ScreenPosition, {
        { ScreenPosition::TopLeft, "TopLeft" },
        { ScreenPosition::TopCenter, "TopCenter" },
        { ScreenPosition::TopRight, "TopRight" },
        { ScreenPosition::MiddleLeft, "MiddleLeft" },
        { ScreenPosition::MiddleCenter, "MiddleCenter" },
        { ScreenPosition::MiddleRight, "MiddleRight" },
        { ScreenPosition::BottomLeft, "BottomLeft" },
        { ScreenPosition::BottomCenter, "BottomCenter" },
        { ScreenPosition::BottomRight, "BottomRight" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(app::AlignmentMode__Enum, {
        { AlignmentMode__Enum_Left, "Left" },
        { AlignmentMode__Enum_Center, "Center" },
        { AlignmentMode__Enum_Right, "Right" },
        { AlignmentMode__Enum_Justify, "Justify" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(app::HorizontalAnchorMode__Enum, {
        { HorizontalAnchorMode__Enum_Left, "Left" },
        { HorizontalAnchorMode__Enum_Center, "Center" },
        { HorizontalAnchorMode__Enum_Right, "Right" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(app::VerticalAnchorMode__Enum, {
        { VerticalAnchorMode__Enum_Top, "Top" },
        { VerticalAnchorMode__Enum_Middle, "Middle" },
        { VerticalAnchorMode__Enum_Bottom, "Bottom" },
    });
}

INJECT_C_DLLEXPORT void report_seed_reload()
{
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_on_reload";
    ipc::send_message(response.dump());
}

INJECT_C_DLLEXPORT void report_load()
{
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_on_load";
    ipc::send_message(response.dump());
}

INJECT_C_DLLEXPORT void report_uber_state_change(int group, int state, double value)
{
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_on_uber_state_changed";
    response["payload"]["group"] = group;
    response["payload"]["state"] = state;
    response["payload"]["value"] = value;
    ipc::send_message(response.dump());
}

INJECT_C_DLLEXPORT void report_input(input::Action type, bool pressed)
{
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_input";
    response["payload"]["type"] = type;
    response["payload"]["pressed"] = pressed;
    ipc::send_message(response.dump());
}
