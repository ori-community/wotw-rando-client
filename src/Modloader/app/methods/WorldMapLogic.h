#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WorldMapLogic.h>

namespace app::classes::WorldMapLogic {
    IL2CPP_REGISTER_METHOD(0x00582C10, void, Awake, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00582CE0, void, OnDestroy, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00582E20, void, FixedUpdate, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00583500, void, UpdateCurrentArea, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00583910, app::RuntimeGameWorldArea*, FindAreaFromPosition, app::WorldMapLogic* this_ptr, app::Vector3 camera_position)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, app::WorldMapLogic* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::SuspendableMask__Enum, get_Mask, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00583BA0, void, set_Mask, app::WorldMapLogic* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00583C50, void, ctor, app::WorldMapLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00583D20, void, cctor, )
} // namespace app::classes::WorldMapLogic
