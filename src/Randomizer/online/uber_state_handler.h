#pragma once

#include <Core/api/uber_states/uber_state.h>

#include <unordered_map>
#include <unordered_set>
#include <Common/event_bus.h>

namespace randomizer::online {
    class UberStateHandler {
    public:
        void change_uber_state(core::api::uber_states::UntypedUberState state, double value);
        bool should_sync(core::api::uber_states::UntypedUberId state_id);
        void update();

        void set_synced_states(std::unordered_set<core::api::uber_states::UntypedUberId>&& synced);
        [[nodiscard]] std::unordered_set<core::api::uber_states::UntypedUberId> const& get_synced_states() const { return m_synced_states; }

        void clear_unsyncables();
        void set_unsyncable(core::api::uber_states::UntypedUberId state_id, bool value);

        auto& should_sync_event_bus() { return m_should_sync_event_bus; }
        void start_queueing_changes();
        void stop_queueing_and_flush_queued_changes();

    private:
        bool m_queueing_changes = false;
        common::CollectingEventBus<bool, const core::api::uber_states::UntypedUberId&> m_should_sync_event_bus;
        std::vector<std::pair<core::api::uber_states::UntypedUberState, double>> m_queued_changes;
        std::unordered_set<core::api::uber_states::UntypedUberId> m_unsyncable_states;
        std::unordered_set<core::api::uber_states::UntypedUberId> m_synced_states;
        std::unordered_map<core::api::uber_states::UntypedUberId, double> m_current_frame_changes;
    };
} // namespace randomizer::online
