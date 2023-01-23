#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterPlatformMovementManager.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>

namespace app::classes::CharacterPlatformMovementManager {
    IL2CPP_REGISTER_METHOD(0x01312690, app::CharacterPlatformMovementManager*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::CharacterPlatformMovementManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013129B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01312A50, void, Register, (app::CharacterPlatformMovementManager * this_ptr, app::CharacterPlatformMovement* pm))
    IL2CPP_REGISTER_METHOD(0x01312BE0, void, Unregister, (app::CharacterPlatformMovementManager * this_ptr, app::CharacterPlatformMovement* pm))
    IL2CPP_REGISTER_METHOD(0x01312D20, void, OnUpdate, (app::CharacterPlatformMovementManager * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x013134A0, void, OnLateFrameUpdate, (app::CharacterPlatformMovementManager * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01313670, void, ctor, (app::CharacterPlatformMovementManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01313920, void, cctor, ())
} // namespace app::classes::CharacterPlatformMovementManager
