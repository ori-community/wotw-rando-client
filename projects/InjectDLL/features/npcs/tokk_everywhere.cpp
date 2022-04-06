#include <uber_states/state_applier.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    void initialize_tokk()
    {
        // Upper Marsh
        // 1808259966 Present
        // 1558151251 Gone
        uber_states::register_applier_redirect({ "", 1558151251 }, 1808259966);
    }

    CALL_ON_INIT(initialize_tokk);
}
