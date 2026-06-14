#pragma once

#include <Core/api/uber_states/uber_state.h>

#include <unordered_map>
#include <unordered_set>
#include <Common/event_bus.h>

namespace randomizer::online {
    class UberStateHandler {
    public:
        struct UberStateChangedEvent {
            core::api::uber_states::UberState state;
            double previous_value;
        };

        void change_uber_state(core::api::uber_states::UberState state, double value);
        bool should_sync(core::api::uber_states::UberState const& state, double previous);
        void update();

        void set_synced_states(std::unordered_set<core::api::uber_states::UberState>&& synced);
        [[nodiscard]] std::unordered_set<core::api::uber_states::UberState> const& get_synced_states() const { return m_synced_states; }

        void clear_unsyncables();
        void set_unsyncable(core::api::uber_states::UberState state, bool value);

        auto& should_sync_event_bus() { return m_should_sync_event_bus; }
        void start_queueing_changes();
        void stop_queueing_and_flush_queued_changes();

    private:
        bool m_queueing_changes = false;
        common::CollectingEventBus<bool, UberStateChangedEvent&> m_should_sync_event_bus;
        std::vector<std::pair<core::api::uber_states::UberState, double>> m_queued_changes;
        std::unordered_set<core::api::uber_states::UberState> m_unsyncable_states;
        std::unordered_set<core::api::uber_states::UberState> m_synced_states;
        std::unordered_map<core::api::uber_states::UberState, double> m_current_frame_changes;
    };
} // namespace randomizer::online
