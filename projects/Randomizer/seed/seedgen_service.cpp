#include <Core/events/task.h>
#include <Core/settings.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seedgen_service.h>
#include <future>

namespace randomizer::seedgen_interface {
    void SeedgenDaemon::ensure_started() {
        if (is_running()) {
            return;
        }

        TinyProcessLib::Config config;
        config.show_window = TinyProcessLib::Config::ShowWindow::hide;
        config.on_stderr_close = [&] {
            modloader::error("seedgen_daemon", std::format("Seedgen daemon error: {}", m_process_stderr));

            std::lock_guard _(m_request_queue_mutex);
            m_request_queue = {};
        };

        m_process_stderr.clear();
        m_process = std::make_unique<TinyProcessLib::Process>(
            std::format(
                L"\"{}\" daemon {}",
                (modloader::application_path() / "seedgen.exe").wstring(),
                convert_string_to_wstring(core::settings::seedgen_daemon_arguments())
            ),
            modloader::application_path().wstring(),
            [&](const char* bytes, size_t n) { on_seedgen_stdout(bytes, n); },
            [&](const char* bytes, size_t n) { on_seedgen_stderr(bytes, n); },
            true,
            config
        );

        m_event_bus.trigger_event(Event::DaemonStarted);
    }

    void SeedgenDaemon::queue_request(const Request& request) {
        ensure_started();

        m_request_queue_mutex.lock();

        m_request_queue.push(request);
        const auto queue_size = m_request_queue.size();

        m_request_queue_mutex.unlock();

        if (queue_size == 1) {
            process_next_request();
        }
    }

    common::MultiEventBus<SeedgenDaemon::Event>& SeedgenDaemon::event_bus() {
        return m_event_bus;
    }

    void SeedgenDaemon::process_next_request() {
        auto should_process_next = false;
        ensure_started();

        {
            std::lock_guard _(m_request_queue_mutex);

            if (m_request_queue.empty()) {
                return;
            }

            m_process_stdout.clear();
            const auto& request = m_request_queue.front();

            const auto sent_successfully = send_request(request);

            if (!sent_successfully) {
                modloader::error("seedgen_daemon", std::format("Failed to send request: {}", request.name));
            }

            if (!sent_successfully || !request.callback.has_value()) {
                m_request_queue.pop();
                should_process_next = true;
            }
        }

        if (should_process_next) {
            process_next_request();
        }
    }

    bool SeedgenDaemon::send_request(const Request& request) const {
        if (!is_running()) {
            modloader::error("seedgen_daemon", "Tried to send a request but the daemon process was not running");
            return false;
        }

        modloader::debug("seedgen_daemon", std::format("-> {}", request.name));
        return m_process->write(request.to_json().dump()) && m_process->write("\n");
    }

    bool SeedgenDaemon::is_running() const {
        int exit_code;
        return m_process != nullptr && !m_process->try_get_exit_status(exit_code);
    }

    void SeedgenDaemon::on_seedgen_stdout(const char* buffer, size_t size) {
        auto should_process_next = false;

        {
            std::lock_guard _(m_request_queue_mutex);
            const auto& current_request = m_request_queue.front();

            if (!current_request.callback.has_value()) {
                return;
            }

            m_process_stdout.append(buffer, size);

            if (m_process_stdout.back() == '\n') {  // Response is complete
                modloader::debug("seedgen_daemon", std::format("<- {}", current_request.name));
                const auto response = nlohmann::json::parse(m_process_stdout);
                (*current_request.callback)(response);
                m_request_queue.pop();
                should_process_next = true;
            }
        }

        if (should_process_next) {
            process_next_request();
        }
    }

    void SeedgenDaemon::on_seedgen_stderr(const char* buffer, size_t size) { m_process_stderr.append(buffer, size); }

    bool ReachCheckResult::is_same_as(const ReachCheckResult& other) const { return reachable_nodes == other.reachable_nodes; }
    bool ReachCheckResult::is_reachable(const location_data::Location& location) const {
        return reachable_nodes.contains(location.name);
    }

    SeedgenService::SeedgenService() {
        m_on_seedgen_daemon_started_handler = m_daemon.event_bus().register_handler(SeedgenDaemon::Event::DaemonStarted, [&](auto) {
            m_seedgen_info_sent_to_seedgen = false;
            update_seedgen_info();
        });
    }

    void SeedgenService::query_relevant_uber_states() {
        m_daemon.queue_request({
            .name = "RelevantUberStates",
            .callback = [&](const nlohmann::json& response) {
                if (!response.is_array()) {
                    modloader::error("seedgen_service", std::format(
                        "Response to RelevantUberStates was invalid: {}",
                        response.dump()
                    ));
                    return;
                }

                m_relevant_uber_states.apply<void>([&](auto& states) {
                    states.clear();
                    for (const auto& item : response) {
                        states.emplace_back(
                            item.at("group").get<int>(),
                            item.at("member").get<int>()
                        );
                    }
                });

                modloader::debug("seedgen_service", "Fetched relevant uber states");
            }
        });
    }

    void SeedgenService::set_seedgen_info(const nlohmann::json& seedgen_info_json) {
        m_seedgen_info = seedgen_info_json;
        m_seedgen_info_sent_to_seedgen = false;
        update_seedgen_info();
    }

    void SeedgenService::enqueue_reach_check(const std::function<void(const ReachCheckResult&)>& on_completed) {
        if (m_seedgen_info.is_null()) {
            on_completed(ReachCheckResult());
            return;
        }

        nlohmann::json uber_states = nlohmann::json::array();
        m_relevant_uber_states.apply<void>([&](auto& states) {
            for (const auto& state : states) {
                auto& element = uber_states.emplace_back();
                element[0]["group"] = state.group_int();
                element[0]["member"] = state.state();
                element[1] = state.template get<float>();
            }
        });

        nlohmann::json request_data = nlohmann::json::object();
        request_data["uber_states"] = uber_states;

        m_daemon.queue_request({
            .name = "ReachCheck",
            .data = request_data,
            .callback = [&, on_completed](const nlohmann::json& response) {
                if (!response.is_array()) {
                    return;
                }

                ReachCheckResult result;
                for (const auto& item : response) {
                    if (!item.is_string()) {
                        continue;
                    }

                    result.reachable_nodes.emplace(item.get<std::string>());
                }

                core::events::schedule_task_for_next_update([on_completed, result] {
                    on_completed(result);
                });
            }
        });
    }

    void SeedgenService::update_seedgen_info() {
        if (m_seedgen_info_sent_to_seedgen) {
            return;
        }

        if (!m_seedgen_info.is_null()) {
            m_daemon.queue_request({
                .name = "SetSeedgenInfo",
                .data = m_seedgen_info,
            });
        }

        m_seedgen_info_sent_to_seedgen = true;
    }
} // namespace randomizer::seedgen_interface
