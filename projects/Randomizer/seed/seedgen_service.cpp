#include <Randomizer/seed/seedgen_service.h>
#include <Core/events/task.h>
#include <Modloader/modloader.h>
#include <httplib.h>
#include <magic_enum/magic_enum.hpp>
#include <Core/api/uber_states/uber_state_condition.h>


namespace randomizer::seedgen_interface {
    SeedgenService::SeedgenService() {
        const auto setup_fn = [&] {
            m_relevant_uber_states_change_effect = core::reactivity::watch_effect()
                .effect(m_relevant_uber_states)
                .after([&] {
                    const auto& relevant_uber_states = m_relevant_uber_states.get();

                    if (relevant_uber_states.has_value()) {
                        m_relevant_uber_states_trigger_reach_check_effect = core::reactivity::watch_effect()
                            .effect(relevant_uber_states->states)
                            .after([&] {
                                m_reachable_map_icon_set_indices_update_pending = true;
                                update_reachable_map_icon_set_indices_async_if_needed();
                            })
                            .trigger_on_load()
                            .finalize();
                    } else {
                        m_relevant_uber_states_trigger_reach_check_effect = nullptr;
                    }
                })
                .finalize();

            m_map_icon_sets_change_effect = core::reactivity::watch_effect()
                .effect(m_map_icon_sets)
                .after([&] {
                    m_reachable_map_icon_set_indices.get().clear();
                    m_reachable_map_icon_set_indices_update_pending = true;
                    update_reachable_map_icon_set_indices_async_if_needed();
                })
                .finalize();

            update_map_icon_sets_async();
            update_relevant_uber_states_async();
        };

        // Delay setup until game is ready if it isn't yet
        if (modloader::is_game_ready()) {
            setup_fn();
        } else {
            on_game_ready_event = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [=, this](auto) {
                setup_fn();
            });
        }
    }

    const core::Property<std::optional<SeedgenService::MapIconSets>>& SeedgenService::map_icon_sets() const {
        return m_map_icon_sets;
    }

    const core::Property<std::unordered_set<int64_t>>& SeedgenService::reachable_map_icon_set_indices() const {
        return m_reachable_map_icon_set_indices;
    }

    void SeedgenService::set_seedgen_info(const std::optional<nlohmann::json>& json) {
        if (json.has_value()) {
            m_seedgen_info_json_string = json->dump();
        } else {
            m_seedgen_info_json_string = std::nullopt;
        }

        m_reachable_map_icon_set_indices_update_pending = true;
        update_reachable_map_icon_set_indices_async_if_needed();
    }

    SeedgenService::HttpClient::HttpClient() {
        m_worker_thread = std::thread([&] {
            il2cpp::attach_thread();

            httplib::Client client("http://127.0.0.1:51413");

            for (;;) {
                m_worker_thread_semaphore.acquire();

                if (m_should_shutdown_thread.load()) {
                    return;
                }

                while (!m_request_queue.apply<bool>([&](auto& queue) { return queue.empty(); })) {
                    const auto request = m_request_queue.apply<Request>([](auto& queue) { return queue.front(); });

                    const auto httplib_request = httplib::Request {
                        .method = std::string(magic_enum::enum_name(request.method)),
                        .path = request.path,
                        .headers = httplib::Headers{{"Content-Type", "application/json"}},
                        .body = request.body.has_value() ? request.body->dump() : "",
                    };

                    modloader::debug("seedgen_http", std::format("-> {} {}", httplib_request.method, httplib_request.path));

                    const auto result = client.send(httplib_request);

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

                        // TODO: Tell launcher to start the seedgen server or try ourselves...

                        continue;
                    }

                    modloader::debug("seedgen_http", std::format("<- {} {}", result->status, result->body));

                    const auto response_body_string = result->body;

                    try {
                        const auto response_body = response_body_string.empty()
                            ? std::nullopt
                            : std::make_optional(nlohmann::json::parse(response_body_string));

                        if (request.callback.has_value()) {
                            const auto status = static_cast<Status>(result->status);
                            core::events::schedule_task_for_next_update([=] {
                                request.callback->operator()(status, response_body);
                            });
                        }
                    } catch (nlohmann::json::parse_error& ex) {
                        modloader::error(
                            "seedgen_http",
                            std::format("Failed to parse body: '{}'. Will not retry.", ex.what())
                        );

                        core::events::schedule_task_for_next_update([=] {
                            request.callback->operator()(Status::UNKNOWN_CLIENT_ERROR, std::nullopt);
                        });
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

    void SeedgenService::update_map_icon_sets_async() {
        query_map_icon_sets([this](auto& icon_sets) {
            if (!icon_sets.has_value()) {
                modloader::error("seedgen_service", "Failed to query icon sets");
                return;
            }

            if (m_map_icon_sets.get().has_value() && m_map_icon_sets.get()->hash == icon_sets->hash) {
                // Hash didn't change
                return;
            }

            m_map_icon_sets.set(*icon_sets);
        });
    }

    void SeedgenService::update_relevant_uber_states_async() {
        query_relevant_uber_states([this](auto& relevant_uber_states) {
            if (!relevant_uber_states.has_value()) {
                modloader::error("seedgen_service", "Failed to query relevant uber states");
                return;
            }

            if (m_relevant_uber_states.get().has_value() && m_relevant_uber_states.get()->hash == relevant_uber_states->hash) {
                // Hash didn't change
                return;
            }

            m_relevant_uber_states.set(*relevant_uber_states);
        });
    }

    void SeedgenService::update_reachable_map_icon_set_indices_async_if_needed() {
        if (!m_reachable_map_icon_set_indices_update_pending || m_reachable_map_icon_set_indices_update_running) {
            return;
        }

        m_reachable_map_icon_set_indices_update_running = true;
        m_reachable_map_icon_set_indices_update_pending = false;

        query_reach_check([this](auto& reach_check) {
            m_reachable_map_icon_set_indices_update_running = false;

            // Maybe something updated in the meantime and m_reachable_map_icon_set_indices_update_pending is true again...
            update_reachable_map_icon_set_indices_async_if_needed();

            if (!reach_check.has_value()) {
                return;
            }

            const auto& relevant_uber_states = m_relevant_uber_states.get();
            if (relevant_uber_states.has_value() && reach_check->relevant_uber_states_hash != relevant_uber_states->hash) {
                update_relevant_uber_states_async();
                return;
            }

            const auto& map_icon_sets = m_map_icon_sets.get();
            if (map_icon_sets.has_value() && reach_check->map_icons_hash != map_icon_sets->hash) {
                update_map_icon_sets_async();
                return;
            }

            m_reachable_map_icon_set_indices.set(reach_check->reachable_map_icon_set_indices);
        });
    }

    void SeedgenService::query_map_icon_sets(const response_fn<MapIconSets>& callback) {
        m_client.queue_request(HttpClient::Request {
            .method = HttpClient::Method::GET,
            .path = "/logic/map-icons",
            .callback = [callback](const auto& status, const nlohmann::json& response) {
                if (status == HttpClient::Status::OK) {
                    std::vector<MapIconSet> sets;

                    for (const auto & map_icon_set_json: response["mapIcons"]) {
                        std::vector<core::api::uber_states::UberStateCondition> visible_if_any;
                        for (const auto & uber_state_condition_json: map_icon_set_json["visibleIfAny"]) {
                            const auto& uber_identifier = uber_state_condition_json["uberIdentifier"];
                            visible_if_any.emplace_back(
                                core::api::uber_states::UberState(uber_identifier[0].get<int>(), uber_identifier[1].get<int>()),
                                seed::parse_enum<seed::Comparator>(uber_state_condition_json["comparator"]),
                                uber_state_condition_json["value"].get<double>()
                            );
                        }

                        sets.emplace_back(
                            map_icon_set_json["label"].get<std::string>(),
                            map_icon_set_json["kind"].get<map::icons::MapIcon::Type>(),
                            map_icon_set_json["positions"].get<std::vector<app::Vector2>>(),
                            visible_if_any
                        );
                    }

                    callback(MapIconSets{
                        .sets = sets,
                        .hash = response["hash"].get<hash_t>(),
                    });
                    return;
                }

                callback(std::nullopt);
            }
        });
    }

    void SeedgenService::query_relevant_uber_states(const response_fn<RelevantUberStates>& callback) {
        m_client.queue_request(HttpClient::Request {
            .method = HttpClient::Method::GET,
            .path = "/logic/relevant-uber-states",
            .callback = [callback](const auto& status, const nlohmann::json& response) {
                if (status == HttpClient::Status::OK) {
                    std::vector<core::api::uber_states::UberState> states;

                    for (const auto& identifier: response["identifiers"]) {
                        states.emplace_back(identifier[0].get<int>(), identifier[1].get<int>());
                    }

                    callback(RelevantUberStates{
                        .states = states,
                        .hash = response["hash"].get<hash_t>(),
                    });
                    return;
                }

                callback(std::nullopt);
            }
        });
    }

    void SeedgenService::query_reach_check(const response_fn<ReachCheck>& callback) {
        nlohmann::json body;

        if (!m_seedgen_info_json_string.has_value()) {
            callback(std::nullopt);
            return;
        }

        const auto& relevant_uber_states = m_relevant_uber_states.get();
        if (!relevant_uber_states.has_value()) {
            callback(std::nullopt);
            return;
        }

        nlohmann::json states_array = nlohmann::json::array();
        for (const auto& relevant_uber_state: relevant_uber_states->states) {
            states_array.push_back({
                nlohmann::json::array({relevant_uber_state.group_int(), relevant_uber_state.state()}),
                relevant_uber_state.get<double>()
            });
        }

        body["seedgen_info"] = *m_seedgen_info_json_string;
        body["uber_states"] = states_array;

        m_client.queue_request(HttpClient::Request {
            .method = HttpClient::Method::POST,
            .path = "/logic/reach-check",
            .body = body,
            .callback = [callback](const auto& status, const nlohmann::json& response) {
                if (status == HttpClient::Status::OK) {
                    std::unordered_set<int64_t> reachable_indices;

                    for (const auto& reachable_index: response["reachable"]) {
                        reachable_indices.emplace(reachable_index);
                    }

                    callback(ReachCheck{
                        .map_icons_hash = response["map_icons_hash"].get<hash_t>(),
                        .relevant_uber_states_hash = response["relevant_uber_states_hash"].get<hash_t>(),
                        .reachable_map_icon_set_indices = reachable_indices,
                    });
                    return;
                }

                modloader::error("seedgen_service", std::format("Reach check query failed with status {}", static_cast<int>(status)));
                callback(std::nullopt);
            }
        });
    }
} // namespace randomizer::seedgen_interface
