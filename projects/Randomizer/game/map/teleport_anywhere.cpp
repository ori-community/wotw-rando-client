#include <Core/api/game/debug_menu.h>
#include <Randomizer/game/map/teleport_anywhere.h>

#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/interception_macros.h>

namespace randomizer::game::map {
    bool teleport_anywhere = false;

    namespace {
        IL2CPP_INTERCEPT(bool, RuntimeWorldMapIcon, CanBeTeleportedTo, app::RuntimeWorldMapIcon * this_ptr) {
            if (teleport_anywhere && core::api::game::debug_menu::is_debug_enabled()) {
                return true;
            }

            return next::RuntimeWorldMapIcon::CanBeTeleportedTo(this_ptr);
        }
    } // namespace
} // namespace randomizer::game::map
