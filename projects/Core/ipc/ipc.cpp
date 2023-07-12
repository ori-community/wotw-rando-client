#include <ipc/ipc.h>

#include <Core/api/game/game.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Modloader/common.h>

#include <array>
#include <memory>
#include <mutex>
#include <semaphore>
#include <string>
#include <vector>
#include <chrono>
#include <zmq.hpp>

using namespace modloader;

namespace core::ipc {
    namespace {
        std::unique_ptr<std::thread> send_thread;
        std::unique_ptr<std::thread> receive_thread;
        std::mutex incoming_messages_mutex;
        std::mutex outgoing_messages_mutex;
        std::binary_semaphore outgoing_messages_semaphore(true);
        std::vector<nlohmann::json> incoming_messages;
        std::vector<nlohmann::json> outgoing_messages;
        std::atomic<bool> shutdown_ipc_thread;

        std::unique_ptr<zmq::context_t> context;
        std::unique_ptr<zmq::socket_t> socket;

        void receive_thread_fn() {
            while (!shutdown_ipc_thread) {
                zmq::message_t msg;

                std::optional<size_t> receive_result;

                try {
                    receive_result = socket->recv(msg, zmq::recv_flags::dontwait);
                } catch (const zmq::error_t& e) {
                    modloader::warn("IPC", fmt::format("ZeroMQ recv Error: {} {}", e.num(), e.what()));
                    continue;
                }

                if (!receive_result.has_value()) {
                    continue;
                }

                auto str = msg.to_string_view();

                try {
                    auto message = nlohmann::json::parse(str);

                    std::scoped_lock lock(incoming_messages_mutex);
                    incoming_messages.push_back(std::move(message));
                } catch (std::exception &ex) {
                    warn("ipc", "Error parsing ipc message.");
                    info("ipc", ex.what());
                }
            }
        }

        void send_thread_fn() {
            while (!shutdown_ipc_thread) {
                outgoing_messages_semaphore.acquire();
                std::vector<nlohmann::json> local_outgoing_messages;
                outgoing_messages_mutex.lock();
                local_outgoing_messages.insert(
                        local_outgoing_messages.end(),
                        outgoing_messages.begin(),
                        outgoing_messages.end()
                );
                outgoing_messages.clear();
                outgoing_messages_mutex.unlock();

                for (const auto &message: local_outgoing_messages) {
                    if (shutdown_ipc_thread) {
                        break;
                    }

                    zmq::message_t zmq_message(message.dump());

                    try {
                        socket->send(zmq_message, zmq::send_flags::none);
                    } catch (const zmq::error_t& e) {
                        modloader::warn("IPC", fmt::format("ZeroMQ send Error: {} {}", e.num(), e.what()));
                        continue;
                    }
                }
            }
        }

        void start_ipc_threads() {
            shutdown_ipc_thread = false;

            context = std::make_unique<zmq::context_t>();
            socket = std::make_unique<zmq::socket_t>(*context, zmq::socket_type::dealer);

            socket->connect("tcp://127.0.0.1:31414");

            if (receive_thread == nullptr) {
                receive_thread = std::make_unique<std::thread>(receive_thread_fn);
            }

            if (send_thread == nullptr) {
                send_thread = std::make_unique<std::thread>(send_thread_fn);
            }
        }

        CALL_ON_INIT(start_ipc_threads);

        std::unordered_map<std::string, request_handler> handlers;

        void update_pipe(GameEvent game_event, EventTiming timing) {
            std::vector<nlohmann::json> local_messages;

            // Copy messages into a local buffer so we can release the incoming_messages_mutex as early as possible
            {
                std::scoped_lock lock(incoming_messages_mutex);
                auto message_count = incoming_messages.size();
                auto begin = std::make_move_iterator(incoming_messages.begin());
                auto end = std::make_move_iterator(incoming_messages.begin() + message_count);
                local_messages.insert(local_messages.end(), begin, end);
                incoming_messages.erase(incoming_messages.begin(), incoming_messages.begin() + message_count);
            }

            for (auto const &j: local_messages) {
                auto it = handlers.find(j.at("method").get<std::string>());
                if (it != handlers.end())
                    it->second(j);
                else
                    info("ipc", fmt::format("Received unknown action request: {}", j.dump()));
            }
        }
    } // namespace

    void send_message(const nlohmann::json &message) {
        std::scoped_lock lock(outgoing_messages_mutex);
        outgoing_messages.push_back(message);
        outgoing_messages_semaphore.release();
    }

    void register_request_handler(std::string_view name, request_handler handler) {
        handlers[std::string(name)] = handler;
    }

    nlohmann::json respond_to(const nlohmann::json &request) {
        nlohmann::json response;
        response["type"] = "response";
        response["id"] = request.at("id").get<int>();
        return response;
    }

    nlohmann::json make_request(const std::string& method) {
        nlohmann::json response;
        response["type"] = "request";
        response["method"] = method;
        return response;
    }

    void on_shutdown(GameEvent game_event, EventTiming timing) {
        shutdown_ipc_thread = true;

        if (socket) {
            socket->set(zmq::sockopt::linger, 0);
            socket->close();
        }

        if (context) {
            context->shutdown();
            context->close();
            context = nullptr;
        }

        if (send_thread != nullptr && send_thread->joinable()) {
            send_thread->join();
        }

        if (receive_thread != nullptr && receive_thread->joinable()) {
            receive_thread->join();
        }
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &update_pipe);
        game::event_bus().register_handler(GameEvent::TASPausedUpdate, EventTiming::After, &update_pipe);
        game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::After, &on_shutdown);
    }

    CALL_ON_INIT(initialize);
} // namespace core::ipc
