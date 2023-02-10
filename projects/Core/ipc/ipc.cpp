#define WIN32_LEAN_AND_MEAN

#include <ipc/ipc.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/messages/messages.h>
#include <Core/utils/json_serializers.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Modloader/common.h>

#include <stdio.h>
#include <strsafe.h>
#include <windows.h>

#include <array>
#include <iostream>
#include <memory>
#include <mutex>
#include <string>
#include <vector>
#include <chrono>

#undef max
#undef min

using namespace modloader;

namespace core::ipc {
    namespace {
        constexpr int MAX_MESSAGE_SIZE = 1024 * 64;
        constexpr int MAX_MESSAGES_PER_QUEUE = 300;

        std::unique_ptr<std::thread> ipc_thread;
        std::mutex outgoing_messages_mutex;
        std::mutex incoming_messages_mutex;
        std::vector<nlohmann::json> outgoing_messages;
        std::vector<nlohmann::json> incoming_messages;
        std::atomic<bool> shutdown_ipc_thread;

        HANDLE connect() {
            constexpr LPCSTR PIPE_FILE = "\\\\.\\pipe\\wotw_rando";

            HANDLE pipe = CreateFileA(
                    PIPE_FILE,
                    GENERIC_READ | GENERIC_WRITE,
                    0,
                    NULL,
                    OPEN_EXISTING,
                    0,
                    nullptr
            );

            if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE) {
                warn("ipc", fmt::format("Failed to connect to pipe, error: {}", GetLastError()));
                CloseHandle(pipe);
                return nullptr;
            }

            if (!WaitNamedPipeA(PIPE_FILE, 10000)) {
                warn("ipc", "Pipe timeout after 10s");
                CloseHandle(pipe);
                return nullptr;
            }

            unsigned long mode = PIPE_READMODE_BYTE;
            if (!SetNamedPipeHandleState(pipe, &mode, 0, 0)) {
                warn("ipc", fmt::format("Could not switch to read mode, error: {}", GetLastError()));
                CloseHandle(pipe);
                return nullptr;
            }

            return pipe;
        }

        void disconnect(HANDLE pipe) {
            CloseHandle(pipe);
        }

        void pipe_handler() {
            DWORD bytes_read = 0;
            DWORD bytes_written = 0;

            std::vector<char> message_part_buffer;
            std::vector<char> message_buffer;
            unsigned int message_buffer_cursor = 0;
            auto discard_current_message = false;

            HANDLE pipe = connect();

            while (!shutdown_ipc_thread) {
                DWORD bytes_available = 0;

                if (!PeekNamedPipe(pipe, nullptr, 0, nullptr, &bytes_available, nullptr)) {
                    auto error = GetLastError();
                    if (error == ERROR_BROKEN_PIPE ||
                        error == ERROR_PIPE_NOT_CONNECTED ||
                        error == ERROR_INVALID_HANDLE) {
                        warn("ipc", fmt::format("Failed to peek at pipe ({}).", error));
                        disconnect(pipe);
                        pipe = connect();
                        if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE) {
                            warn("ipc", "Failed to reconnect pipe, waiting for 5 seconds.");
                            std::this_thread::sleep_for(std::chrono::seconds(5));
                            continue;
                        }
                    }
                }

                if (bytes_available != 0) {
                    auto size = GetFileSize(pipe, nullptr);

                    if (size == INVALID_FILE_SIZE) {
                        auto error = GetLastError();
                        warn("ipc", fmt::format("Failed to read data ({}).", error));
                        continue;
                    }

                    if (message_part_buffer.size() < size) {
                        message_part_buffer.resize(size);
                    }

                    if (message_buffer.size() < message_buffer_cursor + size) {
                        message_buffer.resize(message_buffer_cursor + size);
                    }

                    auto result = ReadFile(
                            pipe,
                            message_part_buffer.data(),
                            size,
                            &bytes_read,
                            nullptr
                    );

                    if (!result || bytes_read == 0) {
                        auto error = GetLastError();
                        warn("ipc", fmt::format("Failed to read data ({}).", error));
                    } else {
                        for (auto message_part_buffer_cursor = 0; message_part_buffer_cursor < bytes_read; message_part_buffer_cursor++) {
                            auto byte = message_part_buffer[message_part_buffer_cursor];

                            if (discard_current_message) {
                                if (byte == '\0') {
                                    discard_current_message = false;
                                    message_buffer_cursor = 0;
                                }
                                continue;
                            }

                            if (message_buffer_cursor >= MAX_MESSAGE_SIZE) {
                                warn("ipc", "Message exceeded max size. Discarding bytes...");
                                discard_current_message = true;
                                continue;
                            }

                            message_buffer[message_buffer_cursor] = byte;
                            ++message_buffer_cursor;

                            // Got the end of a full message, process message buffer
                            if (byte == '\0') {
                                std::string str = message_buffer.data();
                                trim(str);

                                try {
                                    auto message = nlohmann::json::parse(str);

                                    incoming_messages_mutex.lock();
                                    incoming_messages.push_back(std::move(message));
                                    incoming_messages_mutex.unlock();
                                } catch (std::exception ex) {
                                    warn("ipc", "Error parsing ipc message.");
                                    info("ipc", ex.what());
                                    info("ipc", str);
                                }

                                message_buffer_cursor = 0;
                            }
                        }
                    }
                } else {
                    outgoing_messages_mutex.lock();
                    auto local_sends = outgoing_messages;
                    outgoing_messages.clear();
                    outgoing_messages_mutex.unlock();
                    for (auto message : local_sends) {
                        try {
                            auto string_message = message.dump() + '\0';

                            auto result = WriteFile(
                                    pipe,
                                    string_message.c_str(),
                                    string_message.size(),
                                    &bytes_written,
                                    nullptr
                            );

                            if (!result || bytes_written == 0) {
                                auto error = GetLastError();
                                warn("ipc", fmt::format("Failed to write data ({}).", error));
                            }
                        } catch (std::exception e) {
                            warn("ipc", fmt::format("Failed to serialize data ({}).", e.what()));
                        }
                    }
                }
            }

            disconnect(pipe);
        }

        void start_ipc_thread() {
            shutdown_ipc_thread = false;
            if (ipc_thread == nullptr)
                ipc_thread = std::make_unique<std::thread>(pipe_handler);
        }

        CALL_ON_INIT(start_ipc_thread);

        std::unordered_map<std::string, request_handler> handlers;
        void update_pipe(GameEvent game_event, EventTiming timing) {
            std::vector<nlohmann::json> local_messages;
            {
                std::scoped_lock lock(incoming_messages_mutex);
                auto message_count = std::min(MAX_MESSAGES_PER_QUEUE, static_cast<int>(incoming_messages.size()));
                auto begin = std::make_move_iterator(incoming_messages.begin());
                auto end = std::make_move_iterator(incoming_messages.begin() + message_count);
                local_messages.insert(local_messages.end(), begin, end);
                incoming_messages.erase(incoming_messages.begin(), incoming_messages.begin() + message_count);
            }

            for (auto const& j : local_messages) {
                auto it = handlers.find(j.at("method").get<std::string>());
                if (it != handlers.end())
                    it->second(j);
                else
                    info("ipc", fmt::format("Received unknown action request: {}", j.dump()));
            }
        }
    } // namespace

    void send_message(const nlohmann::json& message) {
        std::scoped_lock lock(outgoing_messages_mutex);
        outgoing_messages.push_back(message);
    }

    void register_request_handler(std::string_view name, request_handler handler) {
        handlers[std::string(name)] = handler;
    }

    nlohmann::json respond_to(const nlohmann::json& request) {
        nlohmann::json response;
        response["type"] = "response";
        response["id"] = request.at("id").get<int>();
        return response;
    }

    nlohmann::json make_request(std::string method) {
        nlohmann::json response;
        response["type"] = "request";
        response["method"] = method;
        return response;
    }

    void on_shutdown(GameEvent game_event, EventTiming timing) {
        shutdown_ipc_thread = true;
        if (ipc_thread != nullptr && ipc_thread->joinable())
            ipc_thread->join();
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &update_pipe);
        game::event_bus().register_handler(GameEvent::TASPausedUpdate, EventTiming::After, &update_pipe);
        game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::After, &on_shutdown);
    }

    CALL_ON_INIT(initialize);
} // namespace core::ipc
