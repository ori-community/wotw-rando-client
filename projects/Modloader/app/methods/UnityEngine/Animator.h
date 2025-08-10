#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AnimatorClipInfo__Array.h>
#include <Modloader/app/structs/AnimatorControllerParameter.h>
#include <Modloader/app/structs/AnimatorControllerParameter__Array.h>
#include <Modloader/app/structs/AnimatorCullingMode__Enum.h>
#include <Modloader/app/structs/AnimatorRecorderMode__Enum.h>
#include <Modloader/app/structs/AnimatorStateInfo.h>
#include <Modloader/app/structs/AnimatorTransitionInfo.h>
#include <Modloader/app/structs/AnimatorUpdateMode__Enum.h>
#include <Modloader/app/structs/Avatar.h>
#include <Modloader/app/structs/AvatarIKGoal__Enum.h>
#include <Modloader/app/structs/AvatarIKHint__Enum.h>
#include <Modloader/app/structs/AvatarTarget__Enum.h>
#include <Modloader/app/structs/HumanBodyBones__Enum.h>
#include <Modloader/app/structs/List_1_UnityEngine_AnimatorClipInfo_.h>
#include <Modloader/app/structs/MatchTargetWeightMask.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RuntimeAnimatorController.h>
#include <Modloader/app/structs/ScriptableObject.h>
#include <Modloader/app/structs/ScriptableObject__Array.h>
#include <Modloader/app/structs/StateInfoIndex__Enum.h>
#include <Modloader/app/structs/StateMachineBehaviour__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Animator {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F1D0, bool, get_avatarRootIsAnimator, )
    IL2CPP_REGISTER_METHOD(0x0307F220, void, set_avatarRootIsAnimator, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F270, bool, get_additiveLoopingAnimationOptimizationEnabled, )
    IL2CPP_REGISTER_METHOD(0x0307F2C0, void, set_additiveLoopingAnimationOptimizationEnabled, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F310, bool, get_isOptimizeAnimationSystemEnabled, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F360, void, set_isOptimizeAnimationSystemEnabled, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F3C0, bool, get_isOptimizeFor3dCharacters, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F410, void, set_isOptimizeFor3dCharacters, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F470, bool, get_isVisible, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F4C0, bool, get_processOnlyRootMotion, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F510, void, set_processOnlyRootMotion, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F570, bool, get_filterJointsOptimizationEnabled, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F5C0, void, set_filterJointsOptimizationEnabled, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F620, bool, get_clipBindingCacheEnabled, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F670, void, set_clipBindingCacheEnabled, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307F6D0, bool, get_isOptimizable, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F720, bool, get_isHuman, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F770, bool, get_hasRootMotion, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F7C0, bool, get_isRootPositionOrRotationControlledByCurves, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F810, float, get_humanScale, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F860, bool, get_isInitialized, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F8B0, float, GetFloat_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307F910, float, GetFloat_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307F970, void, SetFloat_1, app::Animator* this_ptr, app::String* name, float value)
    IL2CPP_REGISTER_METHOD(0x0307F9E0, void, SetFloat_2, app::Animator* this_ptr, app::String* name, float value, float damp_time, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0307FA60, void, SetFloat_3, app::Animator* this_ptr, int32_t id, float value)
    IL2CPP_REGISTER_METHOD(0x0307FAD0, void, SetFloat_4, app::Animator* this_ptr, int32_t id, float value, float damp_time, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0307FB50, bool, GetBool_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FBB0, bool, GetBool_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FC10, void, SetBool_1, app::Animator* this_ptr, app::String* name, bool value)
    IL2CPP_REGISTER_METHOD(0x0307FC90, void, SetBool_2, app::Animator* this_ptr, int32_t id, bool value)
    IL2CPP_REGISTER_METHOD(0x0307FD00, int32_t, GetInteger_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FD60, int32_t, GetInteger_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FDC0, void, SetInteger_1, app::Animator* this_ptr, app::String* name, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0307FE30, void, SetInteger_2, app::Animator* this_ptr, int32_t id, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0307FEA0, void, SetTrigger_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FF00, void, SetTrigger_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FF60, void, ResetTrigger_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FFC0, void, ResetTrigger_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x03080020, bool, IsParameterControlledByCurve_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x03080080, bool, IsParameterControlledByCurve_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x030800E0, app::Vector3, get_deltaPosition, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080160, app::Quaternion, get_deltaRotation, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030801E0, app::Vector3, get_velocity, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080260, app::Vector3, get_angularVelocity, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030802E0, app::Vector3, get_rootPosition, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080360, void, set_rootPosition, app::Animator* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030803C0, app::Quaternion, get_rootRotation, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080440, void, set_rootRotation, app::Animator* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x030804A0, bool, get_applyRootMotion, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030804F0, void, set_applyRootMotion, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03080550, bool, get_linearVelocityBlending, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030805A0, void, set_linearVelocityBlending, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03080600, bool, get_animatePhysics, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080660, void, set_animatePhysics, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030806D0, app::AnimatorUpdateMode__Enum, get_updateMode, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080720, void, set_updateMode, app::Animator* this_ptr, app::AnimatorUpdateMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x03080780, bool, get_hasTransformHierarchy, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030807D0, bool, get_allowConstantClipSamplingOptimization, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080820, void, set_allowConstantClipSamplingOptimization, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03080880, float, get_gravityWeight, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030808D0, app::Vector3, get_bodyPosition, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080960, void, set_bodyPosition, app::Animator* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030809E0, app::Vector3, get_bodyPositionInternal, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080A60, void, set_bodyPositionInternal, app::Animator* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x03080AC0, app::Quaternion, get_bodyRotation, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080B50, void, set_bodyRotation, app::Animator* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x03080BC0, app::Quaternion, get_bodyRotationInternal, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03080C40, void, set_bodyRotationInternal, app::Animator* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x03080CA0, app::Vector3, GetIKPosition, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03080D40, app::Vector3, GetGoalPosition, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03080DD0, void, SetIKPosition, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Vector3 goal_position)
    IL2CPP_REGISTER_METHOD(0x03080E60, void, SetGoalPosition, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Vector3 goal_position)
    IL2CPP_REGISTER_METHOD(0x03080ED0, app::Quaternion, GetIKRotation, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03080F70, app::Quaternion, GetGoalRotation, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03081000, void, SetIKRotation, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Quaternion goal_rotation)
    IL2CPP_REGISTER_METHOD(0x03081080, void, SetGoalRotation, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Quaternion goal_rotation)
    IL2CPP_REGISTER_METHOD(0x030810F0, float, GetIKPositionWeight, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03081160, float, GetGoalWeightPosition, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x030811C0, void, SetIKPositionWeight, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, float value)
    IL2CPP_REGISTER_METHOD(0x03081240, void, SetGoalWeightPosition, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, float value)
    IL2CPP_REGISTER_METHOD(0x030812B0, float, GetIKRotationWeight, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03081320, float, GetGoalWeightRotation, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal)
    IL2CPP_REGISTER_METHOD(0x03081380, void, SetIKRotationWeight, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, float value)
    IL2CPP_REGISTER_METHOD(0x03081400, void, SetGoalWeightRotation, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, float value)
    IL2CPP_REGISTER_METHOD(0x03081470, app::Vector3, GetIKHintPosition, app::Animator* this_ptr, app::AvatarIKHint__Enum hint)
    IL2CPP_REGISTER_METHOD(0x03081510, app::Vector3, GetHintPosition, app::Animator* this_ptr, app::AvatarIKHint__Enum hint)
    IL2CPP_REGISTER_METHOD(0x030815A0, void, SetIKHintPosition, app::Animator* this_ptr, app::AvatarIKHint__Enum hint, app::Vector3 hint_position)
    IL2CPP_REGISTER_METHOD(0x03081630, void, SetHintPosition, app::Animator* this_ptr, app::AvatarIKHint__Enum hint, app::Vector3 hint_position)
    IL2CPP_REGISTER_METHOD(0x030816A0, float, GetIKHintPositionWeight, app::Animator* this_ptr, app::AvatarIKHint__Enum hint)
    IL2CPP_REGISTER_METHOD(0x03081710, float, GetHintWeightPosition, app::Animator* this_ptr, app::AvatarIKHint__Enum hint)
    IL2CPP_REGISTER_METHOD(0x03081770, void, SetIKHintPositionWeight, app::Animator* this_ptr, app::AvatarIKHint__Enum hint, float value)
    IL2CPP_REGISTER_METHOD(0x030817F0, void, SetHintWeightPosition, app::Animator* this_ptr, app::AvatarIKHint__Enum hint, float value)
    IL2CPP_REGISTER_METHOD(0x03081860, void, SetLookAtPosition, app::Animator* this_ptr, app::Vector3 look_at_position)
    IL2CPP_REGISTER_METHOD(0x030818E0, void, SetLookAtPositionInternal, app::Animator* this_ptr, app::Vector3 look_at_position)
    IL2CPP_REGISTER_METHOD(0x03081940, void, SetLookAtWeight_1, app::Animator* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x030819D0, void, SetLookAtWeight_2, app::Animator* this_ptr, float weight, float body_weight)
    IL2CPP_REGISTER_METHOD(0x03081A70, void, SetLookAtWeight_3, app::Animator* this_ptr, float weight, float body_weight, float head_weight)
    IL2CPP_REGISTER_METHOD(0x03081B20, void, SetLookAtWeight_4, app::Animator* this_ptr, float weight, float body_weight, float head_weight, float eyes_weight)
    IL2CPP_REGISTER_METHOD(
        0x03081BC0,
        void,
        SetLookAtWeight_5,
        app::Animator* this_ptr,
        float weight,
        float body_weight,
        float head_weight,
        float eyes_weight,
        float clamp_weight
    )
    IL2CPP_REGISTER_METHOD(
        0x03081C20,
        void,
        SetLookAtWeightInternal,
        app::Animator* this_ptr,
        float weight,
        float body_weight,
        float head_weight,
        float eyes_weight,
        float clamp_weight
    )
    IL2CPP_REGISTER_METHOD(0x03081CB0, void, SetBoneLocalRotation, app::Animator* this_ptr, app::HumanBodyBones__Enum human_bone_id, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x03081D70, void, SetBoneLocalRotationInternal, app::Animator* this_ptr, int32_t human_bone_id, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x03081DE0, app::ScriptableObject*, GetBehaviour_1, app::Animator* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x03081E40, app::ScriptableObject__Array*, InternalGetBehaviours, app::Animator* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x03081EA0,
        app::StateMachineBehaviour__Array*,
        GetBehaviours_1,
        app::Animator* this_ptr,
        int32_t full_path_hash,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(
        0x03081FC0,
        app::ScriptableObject__Array*,
        InternalGetBehavioursByKey,
        app::Animator* this_ptr,
        int32_t full_path_hash,
        int32_t layer_index,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(0x03082040, bool, get_stabilizeFeet, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03082090, void, set_stabilizeFeet, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030820F0, int32_t, get_layerCount, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03082140, app::String*, GetLayerName, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x030821A0, int32_t, GetLayerIndex, app::Animator* this_ptr, app::String* layer_name)
    IL2CPP_REGISTER_METHOD(0x03082200, float, GetLayerWeight, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03082260, void, SetLayerWeight, app::Animator* this_ptr, int32_t layer_index, float weight)
    IL2CPP_REGISTER_METHOD(
        0x030822D0,
        void,
        GetAnimatorStateInfo,
        app::Animator* this_ptr,
        int32_t layer_index,
        app::StateInfoIndex__Enum state_info_index,
        app::AnimatorStateInfo* info
    )
    IL2CPP_REGISTER_METHOD(0x03082350, app::AnimatorStateInfo, GetCurrentAnimatorStateInfo, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03082400, app::AnimatorStateInfo, GetNextAnimatorStateInfo, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x030824B0, void, GetAnimatorTransitionInfo_1, app::Animator* this_ptr, int32_t layer_index, app::AnimatorTransitionInfo* info)
    IL2CPP_REGISTER_METHOD(0x03082520, app::AnimatorTransitionInfo, GetAnimatorTransitionInfo_2, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x030825C0, int32_t, GetAnimatorClipInfoCount, app::Animator* this_ptr, int32_t layer_index, bool current)
    IL2CPP_REGISTER_METHOD(0x03082630, int32_t, GetCurrentAnimatorClipInfoCount, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03082690, int32_t, GetNextAnimatorClipInfoCount, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x030826F0, app::AnimatorClipInfo__Array*, GetCurrentAnimatorClipInfo_1, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03082750, app::AnimatorClipInfo__Array*, GetNextAnimatorClipInfo_1, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(
        0x030827B0,
        void,
        GetCurrentAnimatorClipInfo_2,
        app::Animator* this_ptr,
        int32_t layer_index,
        app::List_1_UnityEngine_AnimatorClipInfo_* clips
    )
    IL2CPP_REGISTER_METHOD(0x03082890, void, GetAnimatorClipInfoInternal, app::Animator* this_ptr, int32_t layer_index, bool is_current, app::Object* clips)
    IL2CPP_REGISTER_METHOD(
        0x03082910,
        app::AnimatorClipInfo__Array*,
        GetAnimatorClipInfoInternalWinRT,
        app::Animator* this_ptr,
        int32_t layer_index,
        bool is_current
    )
    IL2CPP_REGISTER_METHOD(
        0x03082980,
        void,
        GetNextAnimatorClipInfo_2,
        app::Animator* this_ptr,
        int32_t layer_index,
        app::List_1_UnityEngine_AnimatorClipInfo_* clips
    )
    IL2CPP_REGISTER_METHOD(0x03082A60, bool, IsInTransition, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03082AC0, app::AnimatorControllerParameter__Array*, get_parameters, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03082B10, int32_t, get_parameterCount, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03082B60, app::AnimatorControllerParameter*, GetParameter, app::Animator* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x03082D30, float, get_feetPivotActive, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03082D80, void, set_feetPivotActive, app::Animator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03082DE0, float, get_pivotWeight, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03082E30, app::Vector3, get_pivotPosition, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03082EB0,
        void,
        MatchTarget_1,
        app::Animator* this_ptr,
        app::Vector3 match_position,
        app::Quaternion match_rotation,
        int32_t target_body_part,
        app::MatchTargetWeightMask weight_mask,
        float start_normalized_time,
        float target_normalized_time
    )
    IL2CPP_REGISTER_METHOD(
        0x03082F60,
        void,
        MatchTarget_2,
        app::Animator* this_ptr,
        app::Vector3 match_position,
        app::Quaternion match_rotation,
        app::AvatarTarget__Enum target_body_part,
        app::MatchTargetWeightMask weight_mask,
        float start_normalized_time
    )
    IL2CPP_REGISTER_METHOD(
        0x03083020,
        void,
        MatchTarget_3,
        app::Animator* this_ptr,
        app::Vector3 match_position,
        app::Quaternion match_rotation,
        app::AvatarTarget__Enum target_body_part,
        app::MatchTargetWeightMask weight_mask,
        float start_normalized_time,
        float target_normalized_time
    )
    IL2CPP_REGISTER_METHOD(0x030830E0, void, InterruptMatchTarget_1, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03083140, void, InterruptMatchTarget_2, app::Animator* this_ptr, bool complete_match)
    IL2CPP_REGISTER_METHOD(0x030831A0, bool, get_isMatchingTarget, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030831F0, float, get_speed, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03083240, void, set_speed, app::Animator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030832A0, void, ForceStateNormalizedTime, app::Animator* this_ptr, float normalized_time)
    IL2CPP_REGISTER_METHOD(0x03083310, void, CrossFadeInFixedTime_1, app::Animator* this_ptr, app::String* state_name, float fixed_transition_duration)
    IL2CPP_REGISTER_METHOD(
        0x030833E0,
        void,
        CrossFadeInFixedTime_2,
        app::Animator* this_ptr,
        app::String* state_name,
        float fixed_transition_duration,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(
        0x030834B0,
        void,
        CrossFadeInFixedTime_3,
        app::Animator* this_ptr,
        app::String* state_name,
        float fixed_transition_duration,
        int32_t layer,
        float fixed_time_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x03083580,
        void,
        CrossFadeInFixedTime_4,
        app::Animator* this_ptr,
        app::String* state_name,
        float fixed_transition_duration,
        int32_t layer,
        float fixed_time_offset,
        float normalized_transition_time
    )
    IL2CPP_REGISTER_METHOD(
        0x03083650,
        void,
        CrossFadeInFixedTime_5,
        app::Animator* this_ptr,
        int32_t state_hash_name,
        float fixed_transition_duration,
        int32_t layer,
        float fixed_time_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x030836E0,
        void,
        CrossFadeInFixedTime_6,
        app::Animator* this_ptr,
        int32_t state_hash_name,
        float fixed_transition_duration,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(0x03083770, void, CrossFadeInFixedTime_7, app::Animator* this_ptr, int32_t state_hash_name, float fixed_transition_duration)
    IL2CPP_REGISTER_METHOD(
        0x03083800,
        void,
        CrossFadeInFixedTime_8,
        app::Animator* this_ptr,
        int32_t state_hash_name,
        float fixed_transition_duration,
        int32_t layer,
        float fixed_time_offset,
        float normalized_transition_time
    )
    IL2CPP_REGISTER_METHOD(0x03083880, void, WriteDefaultValues, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x030838D0,
        void,
        CrossFade_1,
        app::Animator* this_ptr,
        app::String* state_name,
        float normalized_transition_duration,
        int32_t layer,
        float normalized_time_offset
    )
    IL2CPP_REGISTER_METHOD(0x03083900, void, CrossFade_2, app::Animator* this_ptr, app::String* state_name, float normalized_transition_duration, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x03083930, void, CrossFade_3, app::Animator* this_ptr, app::String* state_name, float normalized_transition_duration)
    IL2CPP_REGISTER_METHOD(
        0x03083970,
        void,
        CrossFade_4,
        app::Animator* this_ptr,
        app::String* state_name,
        float normalized_transition_duration,
        int32_t layer,
        float normalized_time_offset,
        float normalized_transition_time
    )
    IL2CPP_REGISTER_METHOD(
        0x03083A40,
        void,
        CrossFade_5,
        app::Animator* this_ptr,
        int32_t state_hash_name,
        float normalized_transition_duration,
        int32_t layer,
        float normalized_time_offset,
        float normalized_transition_time
    )
    IL2CPP_REGISTER_METHOD(
        0x03083AC0,
        void,
        CrossFade_6,
        app::Animator* this_ptr,
        int32_t state_hash_name,
        float normalized_transition_duration,
        int32_t layer,
        float normalized_time_offset
    )
    IL2CPP_REGISTER_METHOD(0x03083B50, void, CrossFade_7, app::Animator* this_ptr, int32_t state_hash_name, float normalized_transition_duration, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x03083BF0, void, CrossFade_8, app::Animator* this_ptr, int32_t state_hash_name, float normalized_transition_duration)
    IL2CPP_REGISTER_METHOD(0x03083C80, void, PlayInFixedTime_1, app::Animator* this_ptr, app::String* state_name, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x03083CA0, void, PlayInFixedTime_2, app::Animator* this_ptr, app::String* state_name)
    IL2CPP_REGISTER_METHOD(0x03083CD0, void, PlayInFixedTime_3, app::Animator* this_ptr, app::String* state_name, int32_t layer, float fixed_time)
    IL2CPP_REGISTER_METHOD(0x03083D60, void, PlayInFixedTime_4, app::Animator* this_ptr, int32_t state_name_hash, int32_t layer, float fixed_time)
    IL2CPP_REGISTER_METHOD(0x03083DE0, void, PlayInFixedTime_5, app::Animator* this_ptr, int32_t state_name_hash, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x03083E00, void, PlayInFixedTime_6, app::Animator* this_ptr, int32_t state_name_hash)
    IL2CPP_REGISTER_METHOD(0x03083E30, void, Play_1, app::Animator* this_ptr, app::String* state_name, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x03083E50, void, Play_2, app::Animator* this_ptr, app::String* state_name)
    IL2CPP_REGISTER_METHOD(0x03083E80, void, Play_3, app::Animator* this_ptr, app::String* state_name, int32_t layer, float normalized_time)
    IL2CPP_REGISTER_METHOD(0x03083F10, void, Play_4, app::Animator* this_ptr, int32_t state_name_hash, int32_t layer, float normalized_time)
    IL2CPP_REGISTER_METHOD(0x03083F90, void, Play_5, app::Animator* this_ptr, int32_t state_name_hash, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x03083FB0, void, Play_6, app::Animator* this_ptr, int32_t state_name_hash)
    IL2CPP_REGISTER_METHOD(0x03083FE0, void, SetTarget, app::Animator* this_ptr, app::AvatarTarget__Enum target_index, float target_normalized_time)
    IL2CPP_REGISTER_METHOD(0x03084050, app::Vector3, get_targetPosition, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030840D0, app::Quaternion, get_targetRotation, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, IsControlled, app::Animator* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x03084150, bool, IsBoneTransform, app::Animator* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x030841B0, app::Transform*, get_avatarRoot, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084200, app::Transform*, GetBoneTransform, app::Animator* this_ptr, app::HumanBodyBones__Enum human_bone_id)
    IL2CPP_REGISTER_METHOD(0x03084370, app::Transform*, GetBoneTransformInternal, app::Animator* this_ptr, int32_t human_bone_id)
    IL2CPP_REGISTER_METHOD(0x030843D0, app::AnimatorCullingMode__Enum, get_cullingMode, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084420, void, set_cullingMode, app::Animator* this_ptr, app::AnimatorCullingMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x03084480, void, StartPlayback, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030844D0, void, StopPlayback, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084520, float, get_playbackTime, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084570, void, set_playbackTime, app::Animator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030845D0, void, StartRecording, app::Animator* this_ptr, int32_t frame_count)
    IL2CPP_REGISTER_METHOD(0x03084630, void, StopRecording, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084680, float, get_recorderStartTime, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_recorderStartTime, app::Animator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03084680, float, GetRecorderStartTime, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030846D0, float, get_recorderStopTime, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_recorderStopTime, app::Animator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030846D0, float, GetRecorderStopTime, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084720, app::AnimatorRecorderMode__Enum, get_recorderMode, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084770, app::RuntimeAnimatorController*, get_runtimeAnimatorController, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030847C0, void, set_runtimeAnimatorController, app::Animator* this_ptr, app::RuntimeAnimatorController* value)
    IL2CPP_REGISTER_METHOD(0x03084820, bool, get_hasBoundPlayables, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084870, void, ClearInternalControllerPlayable, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030848C0, bool, HasState, app::Animator* this_ptr, int32_t layer_index, int32_t state_i_d)
    IL2CPP_REGISTER_METHOD(0x03084930, int32_t, StringToHash, app::String* name)
    IL2CPP_REGISTER_METHOD(0x03084980, app::Avatar*, get_avatar, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030849D0, void, set_avatar, app::Animator* this_ptr, app::Avatar* value)
    IL2CPP_REGISTER_METHOD(0x03084A30, app::String*, GetStats, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084A80, app::PlayableGraph, get_playableGraph, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084B00, void, GetCurrentGraph, app::Animator* this_ptr, app::PlayableGraph* graph)
    IL2CPP_REGISTER_METHOD(0x03084B60, void, CheckIfInIKPass, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084C90, bool, IsInIKPass, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307F970, void, SetFloatString, app::Animator* this_ptr, app::String* name, float value)
    IL2CPP_REGISTER_METHOD(0x0307FA60, void, SetFloatID, app::Animator* this_ptr, int32_t id, float value)
    IL2CPP_REGISTER_METHOD(0x0307F8B0, float, GetFloatString, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307F910, float, GetFloatID, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FC10, void, SetBoolString, app::Animator* this_ptr, app::String* name, bool value)
    IL2CPP_REGISTER_METHOD(0x0307FC90, void, SetBoolID, app::Animator* this_ptr, int32_t id, bool value)
    IL2CPP_REGISTER_METHOD(0x0307FB50, bool, GetBoolString, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FBB0, bool, GetBoolID, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FDC0, void, SetIntegerString, app::Animator* this_ptr, app::String* name, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0307FE30, void, SetIntegerID, app::Animator* this_ptr, int32_t id, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0307FD00, int32_t, GetIntegerString, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FD60, int32_t, GetIntegerID, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FEA0, void, SetTriggerString, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FF00, void, SetTriggerID, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307FF60, void, ResetTriggerString, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307FFC0, void, ResetTriggerID, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x03080020, bool, IsParameterControlledByCurveString, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x03080080, bool, IsParameterControlledByCurveID, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0307F9E0, void, SetFloatStringDamp, app::Animator* this_ptr, app::String* name, float value, float damp_time, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0307FAD0, void, SetFloatIDDamp, app::Animator* this_ptr, int32_t id, float value, float damp_time, float delta_time)
    IL2CPP_REGISTER_METHOD(0x03084CE0, bool, get_layersAffectMassCenter, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084D30, void, set_layersAffectMassCenter, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03084D90, float, get_leftFeetBottomHeight, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084DE0, float, get_rightFeetBottomHeight, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084E30, bool, get_supportsOnAnimatorMove, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084E80, void, OnUpdateModeChanged, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084ED0, void, OnCullingModeChanged, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084F20, void, WriteDefaultPose, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03084F70, void, Update, app::Animator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x03084FD0, void, Rebind_1, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03085030, void, Rebind_2, app::Animator* this_ptr, bool write_default_values)
    IL2CPP_REGISTER_METHOD(0x03085090, void, ApplyBuiltinRootMotion, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030850E0, void, EvaluateController_1, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03085140, void, EvaluateController_2, app::Animator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x030851A0, app::String*, GetCurrentStateName, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03085200, app::String*, GetNextStateName, app::Animator* this_ptr, int32_t layer_index)
    IL2CPP_REGISTER_METHOD(0x03085260, app::String*, GetAnimatorStateName, app::Animator* this_ptr, int32_t layer_index, bool current)
    IL2CPP_REGISTER_METHOD(0x030852D0, app::String*, ResolveHash, app::Animator* this_ptr, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x03085330, bool, get_logWarnings, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03085380, void, set_logWarnings, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030853E0, bool, get_fireEvents, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03085430, void, set_fireEvents, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03085490, bool, get_keepAnimatorControllerStateOnDisable, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030854E0, void, set_keepAnimatorControllerStateOnDisable, app::Animator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03085540, app::Vector3, GetVector_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x030855F0, app::Vector3, GetVector_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetVector_1, app::Animator* this_ptr, app::String* name, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetVector_2, app::Animator* this_ptr, int32_t id, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030856A0, app::Quaternion, GetQuaternion_1, app::Animator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x03085750, app::Quaternion, GetQuaternion_2, app::Animator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetQuaternion_1, app::Animator* this_ptr, app::String* name, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetQuaternion_2, app::Animator* this_ptr, int32_t id, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x03085800, void, get_deltaPosition_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03085860, void, get_deltaRotation_Injected, app::Animator* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x030858C0, void, get_velocity_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03085920, void, get_angularVelocity_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03085980, void, get_rootPosition_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030859E0, void, set_rootPosition_Injected, app::Animator* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x03085A40, void, get_rootRotation_Injected, app::Animator* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x03085AA0, void, set_rootRotation_Injected, app::Animator* this_ptr, app::Quaternion* value)
    IL2CPP_REGISTER_METHOD(0x03085B00, void, get_bodyPositionInternal_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03085B60, void, set_bodyPositionInternal_Injected, app::Animator* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x03085BC0, void, get_bodyRotationInternal_Injected, app::Animator* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x03085C20, void, set_bodyRotationInternal_Injected, app::Animator* this_ptr, app::Quaternion* value)
    IL2CPP_REGISTER_METHOD(0x03085C80, void, GetGoalPosition_Injected, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03085CF0, void, SetGoalPosition_Injected, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Vector3* goal_position)
    IL2CPP_REGISTER_METHOD(0x03085D60, void, GetGoalRotation_Injected, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x03085DD0, void, SetGoalRotation_Injected, app::Animator* this_ptr, app::AvatarIKGoal__Enum goal, app::Quaternion* goal_rotation)
    IL2CPP_REGISTER_METHOD(0x03085E40, void, GetHintPosition_Injected, app::Animator* this_ptr, app::AvatarIKHint__Enum hint, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03085EB0, void, SetHintPosition_Injected, app::Animator* this_ptr, app::AvatarIKHint__Enum hint, app::Vector3* hint_position)
    IL2CPP_REGISTER_METHOD(0x03085F20, void, SetLookAtPositionInternal_Injected, app::Animator* this_ptr, app::Vector3* look_at_position)
    IL2CPP_REGISTER_METHOD(0x03085F80, void, SetBoneLocalRotationInternal_Injected, app::Animator* this_ptr, int32_t human_bone_id, app::Quaternion* rotation)
    IL2CPP_REGISTER_METHOD(0x03085FF0, void, get_pivotPosition_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(
        0x03086050,
        void,
        MatchTarget_Injected,
        app::Animator* this_ptr,
        app::Vector3* match_position,
        app::Quaternion* match_rotation,
        int32_t target_body_part,
        app::MatchTargetWeightMask* weight_mask,
        float start_normalized_time,
        float target_normalized_time
    )
    IL2CPP_REGISTER_METHOD(0x030860E0, void, get_targetPosition_Injected, app::Animator* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03086140, void, get_targetRotation_Injected, app::Animator* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x0157BF50, app::Object*, GetBehaviour_2, app::Animator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5AD0, app::Object__Array*, ConvertStateMachineBehaviour, app::ScriptableObject__Array* raw_objects)
    IL2CPP_REGISTER_METHOD(0x02FF5BF0, app::Object__Array*, GetBehaviours_2, app::Animator* this_ptr)
} // namespace app::classes::UnityEngine::Animator
