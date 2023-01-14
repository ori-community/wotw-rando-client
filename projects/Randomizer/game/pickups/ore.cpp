#include <game/pickups/pickups.h>

#include <Core/api/game/player.h>

#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/methods/SeinLevel.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    IL2CPP_INTERCEPT(GameWorld, int32_t, GetCollectedIconTypeCount, (app::GameWorld * this_ptr, app::WorldMapIconType__Enum type)) {
        return type == app::WorldMapIconType__Enum::Ore ? core::api::game::player::ore().get() : next::GameWorld::GetCollectedIconTypeCount(this_ptr, type);
    }

    IL2CPP_INTERCEPT(SeinLevel, void, set_Ore, (app::SeinLevel * this_ptr, int32_t value)) {
        if (game::pickups::should_collect_pickup()) {
            next::SeinLevel::set_Ore(this_ptr, value);
        }
    }
} // namespace
