#include <functional>

namespace uber_states
{
    using applier_intercept = std::function<int32_t(app::NewSetupStateController*, std::string const&, int32_t, int32_t)>;
    using applier_key = std::pair<std::string, int32_t>;

    void register_applier_intercept(applier_key key, applier_intercept callback);
    void register_applier_intercept(std::vector<applier_key> const& states, applier_intercept callback);
    void register_applier_intercept(std::string_view path, std::vector<int32_t> const& states, applier_intercept callback);

    void register_applier_redirect(applier_key key, int32_t new_state, bool dynamic = false);
    void register_applier_redirect(std::vector<std::pair<applier_key, int32_t>> const& states, bool dynamic = false);
    void register_applier_redirect(std::string_view view, std::pair<int32_t, int32_t> const& states, bool dynamic = false);
}
