#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FishingMiniGameController {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (app::FishingMiniGameController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D160, void, set_Mask, (app::FishingMiniGameController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0126D210, app::SeinCharacter *, get_Sein, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D2A0, app::Input_InputButtonProcessor *, get_Button, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D340, bool, get_IsCancelButtonPressed, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D340, bool, get_IsStartButtonPressed, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D370, bool, get_IsInRadius, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D570, bool, get_ShouldStart, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D630, app::VerletStructure_VerletJoint *, get_BaitJoint, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D6A0, void, Awake, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126DAE0, void, OnEnable, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126DCB0, void, OnDisable, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126DE70, void, OnRestoreCheckpoint, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A718, FishingMiniGameController_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0126DEB0, void, MakeSureFishAreSpawnedHack, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126E050, void, FixedUpdate, (app::FishingMiniGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126E0D0, void, ctor, (app::FishingMiniGameController * this_ptr))
}
