#include <interception_macros.h>
#include <dev/dev_commands.h>
#include <uber_states/state_applier.h>

namespace
{
    void initialize_twillen()
    {
        // Twillen Hollow
        // -294171295 Present
        // -598610927 Gone
        uber_states::register_applier_intercept(-598610927, [](auto, auto, auto) -> int32_t { return -294171295; });
    }

    CALL_ON_INIT(initialize_twillen);
}
