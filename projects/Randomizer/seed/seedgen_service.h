#pragma once

#include <Common/event_bus.h>
#include <Common/thread_safe_container.h>
#include <Randomizer/ext/process.hpp>
#include <Randomizer/seed/seedgen_service.h>
#include <queue>
#include <semaphore>
#include <nlohmann/json.hpp>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/property.h>


namespace randomizer::seedgen_interface {
    class SeedgenService {
    public:
        template<typename T>
        using response_fn = std::function<void(const std::optional<T>& response)>;

        using hash_t = std::int64_t;

        struct MapIconSet {
            std::string label;
            map::icons::MapIcon::Type kind;
            std::vector<app::Vector2> positions;
            std::vector<core::api::uber_states::UberStateCondition> visible_if_any;
        };

        struct MapIconSets {
            std::vector<MapIconSet> sets;
            hash_t hash;
        };

        struct RelevantUberStates {
            std::vector<core::api::uber_states::UberState> states;
            hash_t hash;
        };

        struct ReachCheck {
            int64_t map_icons_hash;
            int64_t relevant_uber_states_hash;
            std::unordered_set<int64_t> reachable_map_icon_set_indices;
        };

        SeedgenService();

        /** Returns the currently stored map icon sets */
        const core::Property<std::optional<MapIconSets>>& map_icon_sets() const;

        /** Returns the currently reachable map icon indices from map_icon_sets() */
        const core::Property<std::unordered_set<int64_t>>& reachable_map_icon_set_indices() const;

        /** Set the seedgen info that is passed to seedgen for the reach check */
        void set_seedgen_info(const std::optional<nlohmann::json>& json);

    private:
        class HttpClient {
        public:
            enum class Method {
                GET,
                POST,
            };

            enum class Status {
                UNKNOWN_CLIENT_ERROR = -1,
                OK = 200,
            };

            struct Request {
                Method method;
                std::string path;
                std::optional<nlohmann::json> body = std::nullopt;
                std::optional<std::function<void(Status status, const std::optional<nlohmann::json>& response)>> callback = std::nullopt;
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

        /** Schedules an async update of m_map_icon_sets */
        void update_map_icon_sets_async();

        /** Schedules an async update of m_relevant_uber_states */
        void update_relevant_uber_states_async();

        /** Schedules an async update of m_reachable_map_icon_set_indices if m_reachable_map_icon_set_indices_update_pending is true */
        void update_reachable_map_icon_set_indices_async_if_needed();

        /** Query map icon sets */
        void query_map_icon_sets(const response_fn<MapIconSets>& callback);

        /** Query relevant uber states for reach check */
        void query_relevant_uber_states(const response_fn<RelevantUberStates>& callback);

        /** Query a reach check */
        void query_reach_check(const response_fn<ReachCheck>& callback);

        HttpClient m_client;
        std::optional<std::string> m_seedgen_info_json_string;
        core::Property<std::optional<MapIconSets>> m_map_icon_sets;
        core::Property<std::optional<RelevantUberStates>> m_relevant_uber_states;
        core::Property<std::unordered_set<int64_t>> m_reachable_map_icon_set_indices;

        /** True if m_reachable_map_icon_set_indices are dirty (i.e. we need to do a reach check). Used for request deduplication. */
        bool m_reachable_map_icon_set_indices_update_pending = false;

        /** True if an update of reachable_map_icon_set_indices is currently running. Used for request deduplication. */
        bool m_reachable_map_icon_set_indices_update_running = false;

        /** This effect is responsible to update m_relevant_uber_states_trigger_reach_check_effect when m_relevant_uber_states changes */
        core::reactivity::ReactiveEffect::ptr_t m_relevant_uber_states_change_effect = nullptr;

        /** This effect clears reachable indices and queues a reach check whenever m_map_icon_sets changes */
        core::reactivity::ReactiveEffect::ptr_t m_map_icon_sets_change_effect = nullptr;

        /** This effect is responsible to queue a reach check when any of the uber states in m_relevant_uber_states change */
        core::reactivity::ReactiveEffect::ptr_t m_relevant_uber_states_trigger_reach_check_effect = nullptr;

        common::Droppable::ptr_t on_game_ready_event;
    };
} // namespace randomizer::seedgen_interface
