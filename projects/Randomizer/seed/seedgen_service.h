#pragma once

#include <Common/event_bus.h>
#include <Common/thread_safe_container.h>
#include <Randomizer/ext/process.hpp>
#include <Randomizer/seed/seedgen_service.h>
#include <future>

namespace randomizer::seedgen_interface {
    /**
     * The SeedgenDaemon class is responsible for keeping a seedgen process
     * alive and for low-level communication with that process.
     * You can queue requests using the queue_request method.
     * Requests are guaranteed to be executed in order. If a request has a
     * callback set, a response from seedgen is awaited for before processing
     * the next request. If no callback is set, the request is considered done
     * the moment it got sent.
     */
    class SeedgenDaemon {
    public:
        enum class Event {
            DaemonStarted,
        };

        struct Request {
            std::string name;
            std::optional<nlohmann::json> data = std::nullopt;
            std::optional<std::function<void(const nlohmann::json& response)>> callback = std::nullopt;

            nlohmann::json to_json() const {
                nlohmann::json request_json;

                if (data.has_value()) {
                    request_json[name] = *data;
                } else {
                    request_json = name;
                }

                return request_json;
            }
        };

        void queue_request(const Request& request);
        common::MultiEventBus<Event>& event_bus();

    private:
        void process_next_request();
        bool send_request(const Request& request) const;
        bool is_running() const;
        void ensure_started();
        void on_seedgen_stdout(const char* buffer, size_t size);
        void on_seedgen_stderr(const char* buffer, size_t size);

        std::string m_process_stdout;
        std::string m_process_stderr;

        std::mutex m_request_queue_mutex;
        std::queue<Request> m_request_queue;

        std::unique_ptr<TinyProcessLib::Process> m_process;
        common::MultiEventBus<Event> m_event_bus;
    };

    struct ReachCheckResult {
        std::unordered_set<std::string> reachable_nodes;
        bool is_same_as(const ReachCheckResult& other) const;
        bool is_reachable(const location_data::Location& location) const;
    };

    class SeedgenService {
    public:
        SeedgenService();

        void query_relevant_uber_states();
        void set_seedgen_info(const nlohmann::json& seedgen_info_json);
        void enqueue_reach_check(const std::function<void(const ReachCheckResult&)>& on_completed);

    private:
        void update_seedgen_info();

        SeedgenDaemon m_daemon;
        common::ThreadSafeContainer<std::vector<core::api::uber_states::UberState>> m_relevant_uber_states;
        nlohmann::json m_seedgen_info;
        bool m_seedgen_info_sent_to_seedgen = false;
        common::Droppable::ptr_t m_on_seedgen_daemon_started_handler;
    };
} // namespace randomizer::seedgen_interface
