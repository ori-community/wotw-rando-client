#pragma once

#include <functional>
#include <string>
#include <Modloader/app/structs/NewSetupStateController.h>


namespace randomizer::conditions {
    using state_guid_t = int32_t;
    using new_setup_state_controller_intercept_fn = std::function<state_guid_t(app::NewSetupStateController*,  const std::string& path, state_guid_t original_state)>;
    using new_setup_state_controller_intercept_key = std::pair</* path */ std::string, /* state GUID */ state_guid_t>;

    void register_new_setup_state_controller_intercept(const new_setup_state_controller_intercept_key& key, const new_setup_state_controller_intercept_fn& callback);
    void register_new_setup_state_controller_intercept(std::vector<new_setup_state_controller_intercept_key> const& states, const new_setup_state_controller_intercept_fn& callback);
    void register_new_setup_state_controller_intercept(std::vector<std::string_view> const& paths, std::vector<state_guid_t> const& states,
        const new_setup_state_controller_intercept_fn& callback
    );

    void register_new_setup_state_controller_redirect(const new_setup_state_controller_intercept_key& key, state_guid_t new_state);
    void register_new_setup_state_controller_redirect(std::vector<std::pair<new_setup_state_controller_intercept_key, state_guid_t>> const& states);
    void register_new_setup_state_controller_redirect(std::string_view view, std::pair<state_guid_t, state_guid_t> const& states);
    void apply_all_states();
} // namespace randomizer::conditions
