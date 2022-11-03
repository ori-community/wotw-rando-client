#include <game/pickups/pickups.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinInventory.h>

namespace {
    IL2CPP_INTERCEPT(SeinInventory, void, set_Keystones, (app::SeinInventory * this_ptr, int32_t value)) {
        if (game::pickups::should_collect_pickup())
            next::SeinInventory::set_Keystones(this_ptr, value);
    }
}
