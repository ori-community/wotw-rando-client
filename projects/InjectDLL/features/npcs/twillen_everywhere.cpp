#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <uber_states/state_applier.h>

namespace
{
    void initialize_twillen()
    {
        // Twillen Hollow
        // -294171295 Present
        // -598610927 Gone
        uber_states::register_applier_redirect({ "", -598610927 }, -294171295);
    }

    CALL_ON_INIT(initialize_twillen);
}
