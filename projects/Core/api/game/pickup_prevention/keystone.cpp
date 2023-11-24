#include <Modloader/app/methods/SeinInventory.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/player.h>

namespace {
    IL2CPP_INTERCEPT(SeinInventory, void, set_Keystones, (app::SeinInventory * this_ptr, int32_t value)) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinInventory::set_Keystones(this_ptr, value);
        }
    }
} // namespace
