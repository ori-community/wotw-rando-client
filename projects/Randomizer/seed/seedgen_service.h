#pragma once

#include <Common/event_bus.h>
#include <Common/thread_safe_container.h>
#include <Randomizer/ext/process.hpp>
#include <Randomizer/seed/seedgen_service.h>
#include <queue>
#include <semaphore>
#include <nlohmann/json.hpp>
#include <Core/api/uber_states/uber_state.h>


namespace randomizer::seedgen_interface {
    class SeedgenService {
    public:
        SeedgenService();

    private:
        class HttpClient {
        public:
            enum class Method {
                GET,
                POST,
            };

            struct Request {
                Method method;
                std::string path;
                std::optional<nlohmann::json> body = std::nullopt;
                std::optional<std::function<void(int status_code, const std::optional<nlohmann::json>& response)>> callback = std::nullopt;
            };

            HttpClient();
            ~HttpClient();

            void queue_request(const Request& request);

        private:
            std::binary_semaphore m_worker_thread_semaphore{0};
            std::thread m_worker_thread;
            std::atomic<bool> m_should_shutdown_thread = false;

            common::ThreadSafeContainer<std::queue<Request>> m_request_queue;

            std::unique_ptr<TinyProcessLib::Process> m_process;
        };

        HttpClient m_client;
        common::ThreadSafeContainer<std::vector<core::api::uber_states::UberState>> m_relevant_uber_states;
        nlohmann::json m_seedgen_info;
    };
} // namespace randomizer::seedgen_interface
