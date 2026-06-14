#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/SeinLever.h>
#include <Modloader/app/structs/SeinLeverPuppet.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SeinLever {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01023F30, app::SeinLeverPuppet*, get_Puppet, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01023FF0, bool, get_IsStatePerforming, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024090, bool, get_IsUsingLever, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::ILever*, get_CurrentLever, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024130, bool, get_InRange, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010241D0, void, OnEnable, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024260, void, OnDisable, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024320, void, OnSetReferenceToSein, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024400, void, Start, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010246B0, void, OnDestroy, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024970, void, ShowGrabHint, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024AF0, void, HideGrabHint, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024BC0, void, ShowLeftRightHint, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024D40, void, HideLeftRightHint, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024E10, bool, get_FaceLeft, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024E90, void, set_FaceLeft, app::SeinLever* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01024F20, bool, get_InputLocked, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01024FC0, void, EnterLever, app::SeinLever* this_ptr, app::ILever* lever)
    IL2CPP_REGISTER_METHOD(0x010251D0, void, ExitLever, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010253E0, void, OnTakeDamage, app::SeinLever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x010253F0, void, OnExit, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01025410, void, Serialize, app::SeinLever* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x010254D0, void, UpdateCharacterState, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01026000, void, PlayLeftAnimation, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01026250, void, PlayMiddleAnimation, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01026480, void, PlayRightAnimation, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010266D0, void, PushLeverMiddle, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01026780, void, PushLeverLeft, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01026830, void, PushLeverRight, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010268E0, void, GrabLever, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01026E20, void, ReleaseLever, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01027350, void, UpdateLeverDirection, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01027450, void, UpdateMiddle, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01027640, void, UpdateLeft, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010278C0, bool, get_CanTurn, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01027990, void, UpdateRight, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01027C80, bool, IsLeverValid, app::SeinLever* this_ptr, app::ILever* lever)
    IL2CPP_REGISTER_METHOD(
        0x01027E30,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinLever* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x01027E90, void, ModifyGravityPlatformMovementSettings, app::SeinLever* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(0x01027EC0, void, StartStressTest, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, app::SeinLever* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00A1DC30, void, EndStressTest, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660200, app::StressTestStatus__Enum, get_StressTestStatus, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1D9E0, void, set_StressTestStatus, app::SeinLever* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x01027FA0, bool, get_CanExecuteStressTest, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01027FD0, app::ILever*, GetValidStressTestLever, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01028340, app::String*, get_StressTestName, app::SeinLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinLever* this_ptr)
} // namespace app::classes::SeinLever
