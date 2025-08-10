#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WorldMapOverworldAreaCondition.h>

namespace app::classes::WorldMapOverworldAreaCondition {
    IL2CPP_REGISTER_METHOD(0x005847F0, bool, Validate, app::WorldMapOverworldAreaCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::WorldMapOverworldAreaCondition* this_ptr)
} // namespace app::classes::WorldMapOverworldAreaCondition
