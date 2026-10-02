#include <Randomizer/online/uber_state_handler.h>


namespace randomizer::online {
    void UberStateHandler::change_uber_state(core::api::uber_states::UntypedUberState state, double value) {
        if (m_queueing_changes) {
            m_queued_changes.emplace_back(state, value);
            return;
        }

        m_current_frame_changes[state.get_uber_id()] = value;
        state.set(value);
    }

    bool UberStateHandler::should_sync(const core::api::uber_states::UntypedUberId state_id) {
        if (!m_synced_states.contains(state_id)) {
            return false;
        }

        if (m_unsyncable_states.contains(state_id)) {
            return false;
        }

        const auto should_sync_event_bus_results = m_should_sync_event_bus.trigger_event(state_id);

        if (std::ranges::find(should_sync_event_bus_results, false) != should_sync_event_bus_results.end()) {
            return false;
        }

        const auto current_frame_changes_it = m_current_frame_changes.find(state_id);
        if (current_frame_changes_it == m_current_frame_changes.end()) {
            return true;
        }

        return core::api::uber_states::UntypedUberState(state_id).get<double>() != current_frame_changes_it->second;
    }

    void UberStateHandler::update() {
        m_current_frame_changes.clear();
    }

    void UberStateHandler::set_synced_states(std::unordered_set<core::api::uber_states::UntypedUberId>&& synced) {
        m_synced_states = std::move(synced);
    }

    void UberStateHandler::clear_unsyncables() {
        m_unsyncable_states.clear();
    }

    void UberStateHandler::set_unsyncable(core::api::uber_states::UntypedUberId state_id, bool value) {
        if (value) {
            m_unsyncable_states.emplace(state_id);
        } else {
            m_unsyncable_states.erase(state_id);
        }
    }

    void UberStateHandler::start_queueing_changes() {
        m_queueing_changes = true;
    }

    void UberStateHandler::stop_queueing_and_flush_queued_changes() {
        m_queueing_changes = false;

        for (auto [state, value]: m_queued_changes) {
            change_uber_state(state, value);
        }

        m_queued_changes.clear();
    }
} // namespace online
