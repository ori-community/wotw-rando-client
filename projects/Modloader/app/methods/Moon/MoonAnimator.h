#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_ClipAnimation_EventMetadata_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_2_Moon_FloatAnimationParameter_Single_.h>
#include <Modloader/app/structs/Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationParameter.h>
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager.h>
#include <Modloader/app/structs/AnimationPostprocess__Array.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/IAnimatorPostprocessBase.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_Blend2DInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_BlendInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_ClipInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_DirectBlendInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_Layer_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_LayeredInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata.h>
#include <Modloader/app/structs/MoonAnimator_Blend2DInstance.h>
#include <Modloader/app/structs/MoonAnimator_BlendInstance.h>
#include <Modloader/app/structs/MoonAnimator_ClipInstance.h>
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance.h>
#include <Modloader/app/structs/MoonAnimator_Layer.h>
#include <Modloader/app/structs/MoonAnimator_LayeredInstance.h>
#include <Modloader/app/structs/MoonAnimator_LayersUpdateResult.h>
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation.h>
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance.h>
#include <Modloader/app/structs/Nullable_1_Moon_MoonAnimatorLayerName_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>

namespace app::classes::Moon::MoonAnimator {
    IL2CPP_REGISTER_METHOD(
        0x01B17B10,
        app::MoonAnimator_AnimationInstance*,
        CreateAnimationInstance,
        app::MoonAnimator* this_ptr,
        app::IAnimation* anim,
        bool preview_mode
    )
    IL2CPP_REGISTER_METHOD(0x01B17F90, void, DestroyAnimationInstance, app::MoonAnimator* this_ptr, app::MoonAnimator_AnimationInstance* animation_instance)
    IL2CPP_REGISTER_METHOD(0x01B17FD0, void, EnsureNoAnimatorInPreviewMode, )
    IL2CPP_REGISTER_METHOD(0x01B18300, bool, get_IsInPreview, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_PreviewTime, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B18310, void, set_IsTemporaryForPreview, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01B18450, app::PlayableGraph, get_PreviewPlayableGraph, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B18460, void, EnterAnimationPreviewMode, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B18890, void, ExitAnimationPreviewMode, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B18BA0, void, ClearPreview, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B18C50,
        app::MoonAnimator_PreviewAnimation*,
        AddPreviewAnimation_1,
        app::MoonAnimator* this_ptr,
        app::MoonAnimation* animation,
        float speed,
        int32_t priority,
        float start_time,
        float end_time,
        float weight
    )
    IL2CPP_REGISTER_METHOD(0x01B18E80, void, AddPreviewAnimation_2, app::MoonAnimator* this_ptr, app::MoonAnimator_PreviewAnimation* preview_animation)
    IL2CPP_REGISTER_METHOD(0x01B18F40, void, RemovePreviewAnimation, app::MoonAnimator* this_ptr, app::MoonAnimator_PreviewAnimation* preview_animation)
    IL2CPP_REGISTER_METHOD(0x01B18FE0, void, SampleStateAtThisTime, app::MoonAnimator* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x01B19CC0, void, ForceExitAnimationPreviewMode, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B19CE0, void, SortPreviewAnimations, app::MoonAnimator* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x01B19F60, bool, DidAnimationEndByFinishing, app::MoonAnimator* this_ptr, app::MoonAnimator_PreviewAnimation* preview_animation)
    IL2CPP_REGISTER_METHOD(
        0x01B1A090,
        app::MoonAnimator_PreviewAnimation*,
        GetPreviewAnimationAtTime,
        app::MoonAnimator* this_ptr,
        float time,
        int32_t start_index,
        app::MoonAnimatorLayerName layer
    )
    IL2CPP_REGISTER_METHOD(0x01B1A210, void, InitializePreviewResources, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1A6F0, void, DestroyPreviewResources, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1A810, void, ClearPreviewBlendTreesRoots, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1A990, app::PlayableGraph, get_PlayableGraph, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA50, app::AnimationPostprocessGroupManager*, get_PostprocessGroupManager, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1A9A0, app::AnimationParameterSet*, get_ParameterSet, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1A9B0, bool, get_IsSuspended, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1A9C0, void, set_IsSuspended, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01B1A9D0, bool, get_IsValid, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A500, void, set_IsValid, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01B1AA80, app::Vector3, get_RootVelocity, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1ABF0, app::GameObject*, get_EffectiveAnimatedObject, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1ACC0, app::AnimationPostprocess__Array*, get_PostprocessChain, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1AF20, bool, get_HasAnimationsPlaying, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_AnimationPostCullingAllowed, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_AnimationPostCullingAllowed, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00756A30, app::List_1_Moon_MoonAnimator_Layer_*, get_Layers, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1B0B0, app::MoonAnimator_Layer*, get_BaseLayer, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1B170, bool, get_IsVisible, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00926B00, bool, get_IsInitializedForParallelUpdate, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64240, app::Animator*, get_UnityAnimator, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074F800, int32_t, get_UpdatePriority, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_IsRegisteredToManager, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CA210, void, set_IsRegisteredToManager, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01B1B1D0, bool, get_IsConnectedToPlayableGraph, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1B1E0, void, set_IsConnectedToPlayableGraph, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01B1B1F0, bool, get_StartedNewAnimation, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1B200, void, set_StartedNewAnimation, app::MoonAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFB70, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EB3E0, void, set_ParsingGroup, app::MoonAnimator* this_ptr, app::RecordableParsingGroup__Enum value)
    IL2CPP_REGISTER_METHOD(0x01B1B210, void, add_OnProcessRootMotion, app::MoonAnimator* this_ptr, app::Action_1_UnityEngine_Vector3_* value)
    IL2CPP_REGISTER_METHOD(0x01B1B300, void, remove_OnProcessRootMotion, app::MoonAnimator* this_ptr, app::Action_1_UnityEngine_Vector3_* value)
    IL2CPP_REGISTER_METHOD(0x01B1B3F0, void, add_OnProcessRootRotation, app::MoonAnimator* this_ptr, app::Action_1_UnityEngine_Quaternion_* value)
    IL2CPP_REGISTER_METHOD(0x01B1B4E0, void, remove_OnProcessRootRotation, app::MoonAnimator* this_ptr, app::Action_1_UnityEngine_Quaternion_* value)
    IL2CPP_REGISTER_METHOD(
        0x01B1B5D0,
        void,
        add_OnPlayAnimation,
        app::MoonAnimator* this_ptr,
        app::Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01B1B6C0,
        void,
        remove_OnPlayAnimation,
        app::MoonAnimator* this_ptr,
        app::Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_* value
    )
    IL2CPP_REGISTER_METHOD(0x01B1B7B0, void, add_OnStopAnimation, app::MoonAnimator* this_ptr, app::Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_* value)
    IL2CPP_REGISTER_METHOD(
        0x01B1B8A0,
        void,
        remove_OnStopAnimation,
        app::MoonAnimator* this_ptr,
        app::Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_* value
    )
    IL2CPP_REGISTER_METHOD(0x01B1B990, void, add_OnFloatParameterSet, app::MoonAnimator* this_ptr, app::Action_2_Moon_FloatAnimationParameter_Single_* value)
    IL2CPP_REGISTER_METHOD(0x01B1BA80, void, remove_OnFloatParameterSet, app::MoonAnimator* this_ptr, app::Action_2_Moon_FloatAnimationParameter_Single_* value)
    IL2CPP_REGISTER_METHOD(
        0x01B1BB70,
        void,
        add_OnVectorParameterSet,
        app::MoonAnimator* this_ptr,
        app::Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01B1BC60,
        void,
        remove_OnVectorParameterSet,
        app::MoonAnimator* this_ptr,
        app::Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(0x01B1BD50, void, add_OnEvent, app::MoonAnimator* this_ptr, app::Action_1_Moon_ClipAnimation_EventMetadata_* value)
    IL2CPP_REGISTER_METHOD(0x01B1BE40, void, remove_OnEvent, app::MoonAnimator* this_ptr, app::Action_1_Moon_ClipAnimation_EventMetadata_* value)
    IL2CPP_REGISTER_METHOD(0x01B1BF30, void, add_OnEnabled, app::MoonAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01B1C020, void, remove_OnEnabled, app::MoonAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01B1C110, void, add_OnDisabled, app::MoonAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01B1C200, void, remove_OnDisabled, app::MoonAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01B1C2F0, float, GetParameterValue_1, app::MoonAnimator* this_ptr, app::FloatAnimationParameter* parameter)
    IL2CPP_REGISTER_METHOD(0x01B1C320, void, SetParameterValue_1, app::MoonAnimator* this_ptr, app::FloatAnimationParameter* parameter, float value)
    IL2CPP_REGISTER_METHOD(0x01B1C4F0, app::Vector3, GetParameterValue_2, app::MoonAnimator* this_ptr, app::VectorAnimationParameter* parameter)
    IL2CPP_REGISTER_METHOD(0x01B1C530, void, OnStoppedPlayingAnimation, app::MoonAnimator* this_ptr, app::IActiveAnimation* active_animation)
    IL2CPP_REGISTER_METHOD(0x01B1C690, void, SetParameterValue_2, app::MoonAnimator* this_ptr, app::VectorAnimationParameter* parameter, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x01B1C790, bool, HasValueForParameter, app::MoonAnimator* this_ptr, app::AnimationParameter* parameter)
    IL2CPP_REGISTER_METHOD(
        0x01B1C7C0,
        app::ActiveAnimationHandle,
        Play,
        app::MoonAnimator* this_ptr,
        app::IAnimation* animation,
        int32_t priority,
        app::Func_1_Boolean_* continue_condition,
        app::Nullable_1_Moon_MoonAnimatorLayerName_ layer,
        app::Action* on_stopped_playing
    )
    IL2CPP_REGISTER_METHOD(0x01B1C9B0, app::ActiveAnimationHandle, GetActiveAnimation, app::MoonAnimator* this_ptr, app::IAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x01B1CB90, void, ConnectToPlayableGraph, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1CC50, void, DisconnectFromPlayableGraph, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1CD30, void, OnBeforePlayableGraphEvaluated, app::MoonAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01B1D290, void, OnAfterPlayableGraphEvaluated, app::MoonAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01B1D590, void, AddPostprocess_1, app::MoonAnimator* this_ptr, app::AnimationPostprocess* postprocess, float blend_in_time)
    IL2CPP_REGISTER_METHOD(0x01B1D9A0, void, AddPostprocess_2, app::MoonAnimator* this_ptr, app::IAnimatorPostprocessBase* postprocess, float blend_in_duration)
    IL2CPP_REGISTER_METHOD(
        0x01B1DE10,
        void,
        RemovePostprocess_1,
        app::MoonAnimator* this_ptr,
        app::IAnimatorPostprocessBase* postprocess_to_remove,
        float blend_out_duration
    )
    IL2CPP_REGISTER_METHOD(0x01B1DF60, void, RemovePostprocessJobAt, app::MoonAnimator* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01B1E3A0, void, RemovePostprocess_2, app::MoonAnimator* this_ptr, app::AnimationPostprocess* postprocess, float blend_out_time)
    IL2CPP_REGISTER_METHOD(0x01B1E590, void, OnChangedThroughInspector, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1E5B0, void, Clear, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1E7A0, void, Awake, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1E7C0, void, AssureInitialized, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1EF80, void, PerformSharedInitialization, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F2C0, void, OnEnable, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F2F0, void, OnDisable, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F330, void, OnDestroy, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F470, void, Finalize, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F500, void, MoonCleanup, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F700, void, PerformSharedDeinitialization, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B1F940, app::MoonAnimator_LayersUpdateResult, UpdateLayers, app::MoonAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01B1FD80, void, RunPostprocessChain, app::MoonAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01B20580, void, SaveCurrentAnimatedObjectPose, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B206D0, void, SaveTransformRecursively, app::MoonAnimator* this_ptr, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x01B20A00, void, RestoreSavedAnimatedObjectPose, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B20CA0, void, RestoreSavedAnimatedObjectJointsPose, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B20FD0, void, OnAnimatorMove, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B211A0, void, ClearRootMotion, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B214D0,
        app::MoonAnimator_AnimationPostprocessMetadata*,
        GetAnimationPostprocessMetadata,
        app::MoonAnimator* this_ptr,
        app::AnimationPostprocess* postprocess
    )
    IL2CPP_REGISTER_METHOD(0x01B21650, app::MoonAnimator_Layer*, GetLayer, app::MoonAnimator* this_ptr, app::MoonAnimatorLayerName layer_name)
    IL2CPP_REGISTER_METHOD(0x01B217F0, bool, ContainsLayer, app::MoonAnimator* this_ptr, app::MoonAnimatorLayerName layer_name)
    IL2CPP_REGISTER_METHOD(0x01B218F0, app::Playable, GetRootPlayable, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B21A70, void, UpdateSystemRegistration, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B21CF0, void, ctor, app::MoonAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B23150, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::Object*,
        GetAnimationInstanceFromPool_1,
        app::MoonAnimator* this_ptr,
        app::List_1_System_Object_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_ClipInstance*,
        GetAnimationInstanceFromPool_2,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_ClipInstance_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_BlendInstance*,
        GetAnimationInstanceFromPool_3,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_BlendInstance_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_LayeredInstance*,
        GetAnimationInstanceFromPool_4,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_LayeredInstance_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_DirectBlendInstance*,
        GetAnimationInstanceFromPool_5,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_DirectBlendInstance_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_Blend2DInstance*,
        GetAnimationInstanceFromPool_6,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_Blend2DInstance_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_SimpleCrossfadeInstance*,
        GetAnimationInstanceFromPool_7,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_* pool,
        bool is_preview
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1D50,
        app::MoonAnimator_AnimatedCrossfadeInstance*,
        GetAnimationInstanceFromPool_8,
        app::MoonAnimator* this_ptr,
        app::List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_* pool,
        bool is_preview
    )
} // namespace app::classes::Moon::MoonAnimator
