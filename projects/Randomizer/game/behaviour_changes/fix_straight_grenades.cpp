#include <Modloader/app/methods/SpiritGrenade.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

namespace {
    /**
     * If a grenade is destroyed the same frame a Bash starts its suspended flag gets stuck being set to true.
     * Since grenades are pooled, this grenade will never unsuspend.
     */

    IL2CPP_INTERCEPT(SpiritGrenade, void, Start, (app::SpiritGrenade * this_ptr)) {
        this_ptr->fields._IsSuspended_k__BackingField = false;
        next::SpiritGrenade::Start(this_ptr);
    }
}
