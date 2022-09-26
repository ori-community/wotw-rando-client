#include <functional>

namespace randomizer {
    namespace conditions {
        using applier_intercept = std::function<int32_t(app::NewSetupStateController*, std::string const&, int32_t, int32_t)>;
        using applier_key = std::pair<std::string, int32_t>;

        void register_new_setup_intercept(applier_key key, applier_intercept callback);
        void register_new_setup_intercept(std::vector<applier_key> const& states, applier_intercept callback);
        void register_new_setup_intercept(std::vector<std::string_view> const& paths, std::vector<int32_t> const& states, applier_intercept callback);

        void register_new_setup_redirect(applier_key key, int32_t new_state, bool dynamic = false);
        void register_new_setup_redirect(std::vector<std::pair<applier_key, int32_t>> const& states, bool dynamic = false);
        void register_new_setup_redirect(std::string_view view, std::pair<int32_t, int32_t> const& states, bool dynamic = false);
        void apply_all_states();
    } // namespace conditions
} // namespace randomizer
