#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_BlendAnimation2D_.h>
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/AnimationType__Enum.h>
#include <Modloader/app/structs/BlendAnimation2D.h>
#include <Modloader/app/structs/BlendAnimation2D_Input__Array.h>
#include <Modloader/app/structs/BlendAnimationMode__Enum.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/HashSet_1_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_AnimationClip_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MoonAnimation_RootMotionSample.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::BlendAnimation2D {
    IL2CPP_REGISTER_METHOD(0x00C74EF0, int32_t, get_ValidInputCount, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::BlendAnimation2D_Input__Array*, get_ValidInputs, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::AnimationType__Enum, get_Type, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B080D0, int32_t, get_BlendTreeSize, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::FloatAnimationParameter*, get_ParameterX, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B081F0, void, set_ParameterX, app::BlendAnimation2D* this_ptr, app::FloatAnimationParameter* value)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::FloatAnimationParameter*, get_ParameterY, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B082B0, void, set_ParameterY, app::BlendAnimation2D* this_ptr, app::FloatAnimationParameter* value)
    IL2CPP_REGISTER_METHOD(0x01B08380, void, add_OnUpdated, app::BlendAnimation2D* this_ptr, app::Action_1_Moon_BlendAnimation2D_* value)
    IL2CPP_REGISTER_METHOD(0x01B08470, void, remove_OnUpdated, app::BlendAnimation2D* this_ptr, app::Action_1_Moon_BlendAnimation2D_* value)
    IL2CPP_REGISTER_METHOD(0x010B5C70, int32_t, get_GridNumX, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B08560, void, set_GridNumX, app::BlendAnimation2D* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x010B5C80, int32_t, get_GridNumY, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B08570, void, set_GridNumY, app::BlendAnimation2D* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01B08580, void, OnEnable, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B08590, void, RecalculateInputs, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B087C0, void, Update, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B08860, bool, IsLooping, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B08980, void, CollectParameters, app::BlendAnimation2D* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(0x01B08AB0, void, CollectAnimationClips, app::BlendAnimation2D* this_ptr, app::HashSet_1_UnityEngine_AnimationClip_* clips)
    IL2CPP_REGISTER_METHOD(0x01B08BC0, void, CollectAnimations, app::BlendAnimation2D* this_ptr, app::HashSet_1_Moon_MoonAnimation_* animations)
    IL2CPP_REGISTER_METHOD(0x01B08CE0, float, GetFrameRate, app::BlendAnimation2D* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(0x01B08F40, float, GetDuration, app::BlendAnimation2D* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(0x01B091A0, void, PrepareRootMotionEvaluation, app::BlendAnimation2D* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B092D0,
        app::MoonAnimation_RootMotionSample,
        EvaluateRootMotion,
        app::BlendAnimation2D* this_ptr,
        float time,
        app::AnimationParameterSet* parameter_set
    )
    IL2CPP_REGISTER_METHOD(
        0x01B09440,
        void,
        ComputeCurrentBlendNodes,
        app::BlendAnimation2D* this_ptr,
        float parameter_value_x,
        float parameter_value_y,
        app::BlendAnimationMode__Enum mode,
        app::Single__Array** current_blend_weights,
        app::Int32__Array** current_blend_node_indices,
        int32_t* active_blend_nodes_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01B0A1C0,
        void,
        ClosestPointInterpolation,
        app::BlendAnimation2D* this_ptr,
        app::BlendAnimation2D_Input__Array* inputs,
        float parameter_value_x,
        float parameter_value_y,
        app::BlendAnimationMode__Enum mode,
        app::Single__Array** current_blend_weights,
        app::Int32__Array** current_blend_node_indices,
        int32_t* active_blend_nodes_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01B0A790,
        app::Vector3,
        CalculateBaricentricCoords,
        app::BlendAnimation2D* this_ptr,
        app::Vector3 point,
        app::Vector3 p1,
        app::Vector3 p2,
        app::Vector3 p3
    )
    IL2CPP_REGISTER_METHOD(0x01B0AA40, float, InverseLerp, app::Vector3 a, app::Vector3 b, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x01B0ABA0, app::Vector2, ClosestPointOnLine, app::Vector2 line_start, app::Vector2 line_end, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x01B0AD70, float, Multiply, app::Vector3 A, app::Vector3 B)
    IL2CPP_REGISTER_METHOD(0x01B0ADC0, bool, Approximately, float number, float value)
    IL2CPP_REGISTER_METHOD(0x01B0ADF0, bool, ArePointsCollinear, app::Vector2 v1, app::Vector2 v2, app::Vector2 v3)
    IL2CPP_REGISTER_METHOD(0x01B0B090, void, ctor, app::BlendAnimation2D* this_ptr)
} // namespace app::classes::Moon::BlendAnimation2D
