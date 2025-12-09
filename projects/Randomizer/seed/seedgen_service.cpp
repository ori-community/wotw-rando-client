#include <Randomizer/seed/seedgen_service.h>

#include <Modloader/modloader.h>
#include <httplib.h>
#include <magic_enum/magic_enum.hpp>

namespace randomizer::seedgen_interface {
    SeedgenService::SeedgenService() {
        m_client.queue_request(HttpClient::Request {
            .method = HttpClient::Method::GET,
            .path = "/reach-check/relevant-uber-states",
            .callback = [&](const auto& status, const auto& response) {
                auto x = 0;
            }
        });
    }

    SeedgenService::HttpClient::HttpClient() {
        m_worker_thread = std::thread([&] {
            httplib::Client client("http://127.0.0.1:51413");

            for (;;) {
                m_worker_thread_semaphore.acquire();

                if (m_should_shutdown_thread.load()) {
                    return;
                }

                while (!m_request_queue.apply<bool>([&](auto& queue) { return queue.empty(); })) {
                    const auto request = m_request_queue.apply<Request>([&](auto& queue) { return queue.front(); });

                    const auto result = client.send(httplib::Request {
                        .method = std::string(magic_enum::enum_name(request.method)),
                        .path = request.path,
                        .body = request.body.has_value() ? request.body->dump() : "",
                    });

                    const auto result_error = result.error();
                    if (result_error != httplib::Error::Success) {
                        modloader::warn(
                            "seedgen_http",
                            std::format(
                                "Request '{} {}' failed with error '{}'. Will retry...",
                                magic_enum::enum_name(request.method),
                                request.path,
                                magic_enum::enum_name(result_error)
                            )
                        );

                        using namespace std::chrono_literals;
                        std::this_thread::sleep_for(2s);

                        // TODO: Try to start seedgen server

                        continue;
                    }

                    const auto response_body_string = result->body;

                    const auto response_body = response_body_string.empty()
                        ? std::nullopt
                        : std::make_optional(nlohmann::json::parse(response_body_string));

                    if (request.callback.has_value()) {
                        request.callback->operator()(result->status, response_body);
                    }

                    m_request_queue.apply<void>([&](auto& queue) { queue.pop(); });
                }
            }
        });
    }

    SeedgenService::HttpClient::~HttpClient() {
        m_should_shutdown_thread = true;
        m_worker_thread_semaphore.release();

        if (m_worker_thread.joinable()) {
            m_worker_thread.join();
        }
    }

    void SeedgenService::HttpClient::queue_request(const Request& request) {
        m_request_queue.apply<void>([&](auto& queue) {
            queue.push(request);
        });
        m_worker_thread_semaphore.release();
    }
} // namespace randomizer::seedgen_interface
