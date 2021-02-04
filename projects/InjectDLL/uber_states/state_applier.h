#include <functional>

namespace uber_states
{
    using applier_intercept = std::function<int32_t(app::NewSetupStateController*, int32_t, int32_t)>;

    void register_applier_intercept(int32_t state, applier_intercept callback);
    void register_applier_intercept(std::vector<int32_t> const& states, applier_intercept callback);

    void register_applier_redirect(int32_t state, int32_t new_state, bool dynamic = false);
    void register_applier_redirect(std::vector<std::pair<int32_t, int32_t>> const& states, bool dynamic = false);

    void save_dynamic_redirects();
    void load_dynamic_redirects();
}
