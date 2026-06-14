#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/PetrifiedOwlBossCameraTargetsProvider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlBossCameraTargetsProvider {
    IL2CPP_REGISTER_METHOD(0x0049CF20, float, get_PowlCutOffDistance, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049CF80, app::Vector3, get_PowlReferenceOffset, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049D0D0, void, Awake, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049D100, void, UpdateTargets, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049D210, app::List_1_Moon_CameraTargetSettings_*, GetTargets, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0049D3E0,
        void,
        GetFight1Targets,
        app::PetrifiedOwlBossCameraTargetsProvider* this_ptr,
        app::List_1_Moon_CameraTargetSettings_** targets
    )
    IL2CPP_REGISTER_METHOD(
        0x0049D670,
        void,
        GetFight2Targets,
        app::PetrifiedOwlBossCameraTargetsProvider* this_ptr,
        app::List_1_Moon_CameraTargetSettings_** targets
    )
    IL2CPP_REGISTER_METHOD(0x0049DC90, app::Vector3, GetOriPredictedPosition, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049DCC0, app::Vector3, GetPredictedGroundPosition, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049DE50, app::Vector3, GetCameraFocusPointPosition, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049DF30, app::Vector3, ClampPositionToMaxOffsets, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x0049E120, app::Vector3, ClampToMaxHeight, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x0049E220, float, get_GroundHeight, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049E330, float, get_MaxHeight, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049E490, bool, get_ShouldFrameGround, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049E530, void, ctor, app::PetrifiedOwlBossCameraTargetsProvider* this_ptr)
} // namespace app::classes::PetrifiedOwlBossCameraTargetsProvider
