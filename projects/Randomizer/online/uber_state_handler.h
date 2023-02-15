#pragma once

#include <Core/api/uber_states/uber_state.h>

#include <unordered_map>
#include <unordered_set>

namespace randomizer::online {
    class UberStateHandler {
    public:
        void change_uber_state(core::api::uber_states::UberState state, double value);
        bool should_sync(core::api::uber_states::UberState const& state, double previous);
        void update();

        void set_synced_states(std::unordered_set<core::api::uber_states::UberState>&& synced);
        [[nodiscard]] std::unordered_set<core::api::uber_states::UberState> const& get_synced_states() const { return m_synced_states; }

        void clear_unsyncables();
        void set_unsyncable(core::api::uber_states::UberState state, bool value);

    private:
        std::unordered_set<core::api::uber_states::UberState> m_unsyncable_states;
        std::unordered_set<core::api::uber_states::UberState> m_synced_states;
        std::unordered_map<core::api::uber_states::UberState, double> m_current_frame_changes;
    };
} // namespace randomizer::online
