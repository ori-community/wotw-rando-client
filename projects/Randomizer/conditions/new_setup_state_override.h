#include <functional>
#include <string>

#include <Modloader/app/structs/NewSetupStateController.h>

namespace randomizer {
    namespace conditions {
        using applier_intercept_fn = std::function<int32_t(app::NewSetupStateController*, std::string const& path, int32_t original_state)>;
        using applier_key = std::pair<std::string, int32_t>;

        void register_new_setup_intercept(const applier_key& key, const applier_intercept_fn& callback);
        void register_new_setup_intercept(std::vector<applier_key> const& states, const applier_intercept_fn& callback);
        void register_new_setup_intercept(std::vector<std::string_view> const& paths, std::vector<int32_t> const& states, applier_intercept_fn callback);

        void register_new_setup_redirect(applier_key key, int32_t new_state, bool dynamic = false);
        void register_new_setup_redirect(std::vector<std::pair<applier_key, int32_t>> const& states, bool dynamic = false);
        void register_new_setup_redirect(std::string_view view, std::pair<int32_t, int32_t> const& states, bool dynamic = false);
        void apply_all_states();
    } // namespace conditions
} // namespace randomizer
