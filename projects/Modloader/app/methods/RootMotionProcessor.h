#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RootMotionProcessor.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotionProcessor {
    IL2CPP_REGISTER_METHOD(0x013673F0, void, Start, (app::RootMotionProcessor * this_ptr, app::RootMotionProcessorData* root_motion_config_data, app::MoonAnimator* animator, app::CharacterPlatformMovement* platform_movement, float gravity, app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* motion_modifier))
    IL2CPP_REGISTER_METHOD(0x013676A0, void, End, (app::RootMotionProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01367890, void, OnProcessRootMotion, (app::RootMotionProcessor * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x0474AC18, RootMotionProcessor_OnProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RootMotionProcessor * this_ptr))
} // namespace app::classes::RootMotionProcessor
