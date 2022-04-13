#define WIN32_LEAN_AND_MEAN

#include <randomizer/ipc/ipc.h>

#include <game/game.h>
#include <game/player.h>
#include <input/rando_bindings.h>
#include <input/simulator.h>
#include <interop/csharp_bridge.h>
#include <randomizer/messages.h>
#include <uber_states/uber_state_manager.h>
#include <utils/json_serializers.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>

#include <windows.h>
#include <stdio.h> 
#include <tchar.h>
#include <strsafe.h>

#include <array>
#include <iostream>
#include <memory>
#include <mutex>
#include <string>
#include <vector>
#include <json/json.hpp>

#undef max
#undef min

using namespace modloader;

namespace randomizer
{
    namespace ipc
    {
        namespace
        {
            constexpr int MESSAGE_SIZE = 8192;
            constexpr int MAX_HANDLED_MESSAGES = 300;
            std::unique_ptr<std::thread> ipc_thread;
            std::mutex message_mutex;
            std::mutex send_mutex;
            std::vector<std::string> sends;
            std::vector<std::string> messages;
            std::atomic<bool> shutdown_ipc_thread;

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

                while (!shutdown_ipc_thread)
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
                shutdown_ipc_thread = false;
                if (ipc_thread == nullptr)
                    ipc_thread = std::make_unique<std::thread>(pipe_handler);
            }

            CALL_ON_INIT(start_ipc_thread);

            std::unordered_map<std::string, request_handler> handlers;
            void update_pipe(GameEvent game_event, EventTiming timing)
            {
                std::vector<std::string> local_messages;
                {
                    std::scoped_lock lock(message_mutex);
                    auto message_count = std::min(MAX_HANDLED_MESSAGES, static_cast<int>(messages.size()));
                    auto begin = std::make_move_iterator(messages.begin());
                    auto end = std::make_move_iterator(messages.begin() + message_count);
                    local_messages.insert(local_messages.end(), begin, end);
                    messages.erase(messages.begin(), messages.begin() + message_count);
                }

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
        }

        void send_message(std::string_view message)
        {
            std::scoped_lock lock(send_mutex);
            sends.push_back(std::string(message));
        }

        void register_request_handler(std::string_view name, request_handler handler)
        {
            handlers[std::string(name)] = handler;
        }

        void on_shutdown(GameEvent game_event, EventTiming timing)
        {
            shutdown_ipc_thread = true;
            if (ipc_thread != nullptr && ipc_thread->joinable())
                ipc_thread->join();
        }

        void initialize()
        {
            game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &update_pipe);
            game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::End, &on_shutdown);
        }

        CALL_ON_INIT(initialize);
    }
}
