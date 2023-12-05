#include <Randomizer/game/map/teleport_anywhere.h>

#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/interception_macros.h>

namespace randomizer::game::map {
    bool teleport_anywhere = false;

    namespace {
        IL2CPP_INTERCEPT(RuntimeWorldMapIcon, bool, CanBeTeleportedTo, (app::RuntimeWorldMapIcon * this_ptr)) {
            if (teleport_anywhere)
                return true;

            return next::RuntimeWorldMapIcon::CanBeTeleportedTo(this_ptr);
        }
    } // namespace
} // namespace randomizer::game::map
