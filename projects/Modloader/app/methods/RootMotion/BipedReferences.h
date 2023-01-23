#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BipedReferences.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/BipedReferences_AutoDetectParams.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BipedNaming_BoneType__Enum.h>
#include <Modloader/app/structs/BipedNaming_BoneSide__Enum.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::RootMotion::BipedReferences {
    IL2CPP_REGISTER_METHOD(0x02201AC0, bool, get_isFilled, (app::BipedReferences * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4270, bool, get_isEmpty, (app::BipedReferences * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02201F50, bool, IsEmpty, (app::BipedReferences * this_ptr, bool include_root))
    IL2CPP_REGISTER_METHOD(0x02202420, bool, Contains, (app::BipedReferences * this_ptr, app::Transform* t, bool ignore_root))
    IL2CPP_REGISTER_METHOD(0x02202900, bool, AutoDetectReferences, (app::BipedReferences * *references, app::Transform* root, app::BipedReferences_AutoDetectParams auto_detect_params))
    IL2CPP_REGISTER_METHOD(0x02202C20, void, DetectReferencesByNaming, (app::BipedReferences * *references, app::Transform* root, app::BipedReferences_AutoDetectParams auto_detect_params))
    IL2CPP_REGISTER_METHOD(0x022038C0, void, AssignHumanoidReferences, (app::BipedReferences * *references, app::Animator* animator, app::BipedReferences_AutoDetectParams auto_detect_params))
    IL2CPP_REGISTER_METHOD(0x02203E80, bool, SetupError, (app::BipedReferences * references, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x02203FF0, bool, SetupWarning, (app::BipedReferences * references, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x022040E0, bool, IsNeckBone, (app::Transform * bone, app::Transform* left_upper_arm))
    IL2CPP_REGISTER_METHOD(0x02204290, bool, AddBoneToEyes, (app::Transform * bone, app::BipedReferences** references, app::BipedReferences_AutoDetectParams auto_detect_params))
    IL2CPP_REGISTER_METHOD(0x022043F0, bool, AddBoneToSpine, (app::Transform * bone, app::BipedReferences** references, app::BipedReferences_AutoDetectParams auto_detect_params))
    IL2CPP_REGISTER_METHOD(0x02204630, void, DetectLimb, (app::BipedNaming_BoneType__Enum bone_type, app::BipedNaming_BoneSide__Enum bone_side, app::Transform** first_bone, app::Transform** second_bone, app::Transform** last_bone, app::Transform__Array* transforms))
    IL2CPP_REGISTER_METHOD(0x022047C0, void, AddBoneToHierarchy, (app::Transform__Array * *bones, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x022048F0, bool, LimbError, (app::Transform * bone1, app::Transform* bone2, app::Transform* bone3, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x02204F70, bool, LimbWarning, (app::Transform * bone1, app::Transform* bone2, app::Transform* bone3, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x02205490, bool, SpineError, (app::BipedReferences * references, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, SpineWarning, (app::BipedReferences * references, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x02205910, bool, EyesError, (app::BipedReferences * references, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, EyesWarning, (app::BipedReferences * references, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x02205B10, bool, RootHeightWarning, (app::BipedReferences * references, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x02205F00, bool, FacingAxisWarning, (app::BipedReferences * references, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x022063D0, float, GetVerticalOffset, (app::Vector3 p1, app::Vector3 p2, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02206540, void, ctor, (app::BipedReferences * this_ptr))
} // namespace app::classes::RootMotion::BipedReferences
