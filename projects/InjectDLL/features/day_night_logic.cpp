#include <interception_macros.h>
#include <dev/dev_commands.h>
#include <uber_states/state_applier.h>

namespace
{
    void initialize_day_night_logic()
    {
       // night -> day
        uber_states::register_applier_redirect(-1926205078, -598230906);
        uber_states::register_applier_redirect(1819061226, -1052258879);
        uber_states::register_applier_redirect(-1605692968, -1815347985);
        uber_states::register_applier_redirect(-949591271, -1834135337);
        uber_states::register_applier_redirect(-76384365, 1340727368);
    }

    CALL_ON_INIT(initialize_day_night_logic);
}
