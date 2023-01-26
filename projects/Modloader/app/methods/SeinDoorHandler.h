#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinDoorHandler.h>
#include <Modloader/app/structs/LegacyDoor.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinDoorHandler_State__Enum.h>

namespace app::classes::SeinDoorHandler {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsOverlappingDoor, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsOverlappingDoor, (app::SeinDoorHandler * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00AC45A0, void, ChangeState, (app::SeinDoorHandler * this_ptr, app::SeinDoorHandler_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetReferenceToSein, (app::SeinDoorHandler * this_ptr, app::SeinCharacter* sein))
    IL2CPP_REGISTER_METHOD(0x00AC45C0, bool, IsUsingDoor, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC45D0, void, OnDoorOverlap, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door))
    IL2CPP_REGISTER_METHOD(0x00AC4900, bool, CanEnterDoor, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC4E70, app::LegacyDoor*, GetTargetDoor, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door))
    IL2CPP_REGISTER_METHOD(0x00AC5390, void, EnterIntoDoor, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door))
    IL2CPP_REGISTER_METHOD(0x00AC5D60, bool, PlayDoorEnterAnimation, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC5D70, void, OnFadedToBlack, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC5D90, void, FadeOutOnTimelineEnd, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC5E90, void, OnGoneThroughDoor, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC6320, void, OnSceneEnabled, (app::SeinDoorHandler * this_ptr, bool success))
    IL2CPP_REGISTER_METHOD(0x00AC6460, void, FixedUpdate, (app::SeinDoorHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC72B0, void, ctor, (app::SeinDoorHandler * this_ptr))
} // namespace app::classes::SeinDoorHandler
