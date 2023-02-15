#include <online/uber_state_handler.h>

#include <Modloader/modloader.h>

namespace randomizer::online {
    void UberStateHandler::change_uber_state(core::api::uber_states::UberState state, double value) {
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

    bool UberStateHandler::should_sync(core::api::uber_states::UberState const& state, double previous) {
        if (!m_synced_states.contains(state)) {
            return false;
        }

        if (m_unsyncable_states.contains(state)) {
            return false;
        }

        return !m_current_frame_changes.contains(state);
    }

    void UberStateHandler::update() {
        m_current_frame_changes.clear();
    }

    void UberStateHandler::set_synced_states(std::unordered_set<core::api::uber_states::UberState>&& synced) {
        m_synced_states = std::move(synced);
    }
} // namespace online
