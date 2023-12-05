#include <Randomizer/online/uber_state_handler.h>

#include <Modloader/modloader.h>

namespace randomizer::online {
    void UberStateHandler::change_uber_state(core::api::uber_states::UberState state, double value) {
        if (m_queueing_changes) {
            m_queued_changes.emplace_back(state, value);
            return;
        }

        m_current_frame_changes[state] = value;
        state.set(value);
    }

    void UberStateHandler::clear_unsyncables() {
        m_unsyncable_states.clear();
    }

    void UberStateHandler::set_unsyncable(core::api::uber_states::UberState state, bool value) {
        if (value) {
            m_unsyncable_states.emplace(state);
        } else {
            m_unsyncable_states.erase(state);
        }
    }

    void UberStateHandler::start_queueing_changes() {
        m_queueing_changes = true;
    }

    void UberStateHandler::stop_queueing_and_flush_queued_changes() {
        m_queueing_changes = false;

        for (auto [uber_state, value] : m_queued_changes) {
            change_uber_state(uber_state, value);
        }

        m_queued_changes.clear();
    }

    bool UberStateHandler::should_sync(core::api::uber_states::UberState const& state, double previous) {
        if (!m_synced_states.contains(state)) {
            return false;
        }

        if (m_unsyncable_states.contains(state)) {
            return false;
        }

        auto should_sync_event_bus_results = m_should_sync_event_bus.trigger_event(UberStateChangedEvent {
            state, previous,
        });

        if (std::ranges::find(should_sync_event_bus_results, false) != should_sync_event_bus_results.end()) {
            return false;
        }

        return !m_current_frame_changes.contains(state) || m_current_frame_changes.at(state) != previous;
    }

    void UberStateHandler::update() {
        m_current_frame_changes.clear();
    }

    void UberStateHandler::set_synced_states(std::unordered_set<core::api::uber_states::UberState>&& synced) {
        m_synced_states = std::move(synced);
    }
} // namespace online
