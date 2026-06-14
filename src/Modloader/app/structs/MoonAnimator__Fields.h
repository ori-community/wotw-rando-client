#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator__Fields_DEFINED)
#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/AnimationPlayableOutput.h>
#include <Modloader/app/structs/AnimatorCullingMode__Enum.h>
#include <Modloader/app/structs/MoonAnimatorDebugConfig.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayableGraph_DEFINED) && defined(IL2CPP_STRUCT_AnimationPlayableOutput_DEFINED) && defined(IL2CPP_STRUCT_AnimationLayerMixerPlayable_DEFINED) && defined(IL2CPP_STRUCT_AnimatorCullingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_RecordableParsingGroup__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonAnimatorDebugConfig_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator__Fields_DEFINED
struct List_1_Moon_MoonAnimator_ClipInstance_;
struct List_1_Moon_MoonAnimator_BlendInstance_;
struct List_1_Moon_MoonAnimator_LayeredInstance_;
struct List_1_Moon_MoonAnimator_Blend2DInstance_;
struct List_1_Moon_MoonAnimator_DirectBlendInstance_;
struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_;
struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_;
struct MoonAnimator_AnimationInstance__Array;
struct List_1_Moon_MoonAnimator_PreviewAnimation_;
struct List_1_Moon_MoonAnimator_TransformData_;
struct Action_1_UnityEngine_Vector3_;
struct Action_1_UnityEngine_Quaternion_;
struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_;
struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_;
struct Action_2_Moon_FloatAnimationParameter_Single_;
struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_;
struct Action_1_Moon_ClipAnimation_EventMetadata_;
struct Action;
struct MoonAnimatorDefinition;
struct GameObject;
struct Transform__Array;
struct Animator;
struct AnimationParameterSet;
struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata_;
struct AnimationPostprocessGroupManager;
struct List_1_Moon_MoonAnimator_Layer_;
struct Renderer__Array;
struct List_1_Moon_MoonAnimator_AnimatorPostprocessData_;
struct MoonAnimator__Fields {
    struct Suspendable__Fields _;
    struct List_1_Moon_MoonAnimator_ClipInstance_* m_clipPool;
    struct List_1_Moon_MoonAnimator_BlendInstance_* m_blendPool;
    struct List_1_Moon_MoonAnimator_LayeredInstance_* m_layeredPool;
    struct List_1_Moon_MoonAnimator_Blend2DInstance_* m_blend2DPool;
    struct List_1_Moon_MoonAnimator_DirectBlendInstance_* m_directBlendPool;
    struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_* m_simpleCrossfadePool;
    struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_* m_animatedCrossfadePool;
    struct PlayableGraph m_previewPlayableGraph;
    struct AnimationPlayableOutput m_previewPlayableOutput;
    struct MoonAnimator_AnimationInstance__Array* m_previewBlendTreesRoots;
    bool m_isTemporaryForPreview;
    int32_t m_enterPreviewCounter;
    float m_previewTime;
    struct List_1_Moon_MoonAnimator_PreviewAnimation_* m_previewAnimations;
    struct List_1_Moon_MoonAnimator_TransformData_* m_previewTransformsBackup;
    struct AnimationLayerMixerPlayable m_previewLayerMixer;
    int32_t m_nextPreviewAnimationId;
    AnimatorCullingMode__Enum m_cullingModeBeforePreview;

    bool _AnimationPostCullingAllowed_k__BackingField;
    bool _IsRegisteredToManager_k__BackingField;
    bool _IsConnectedToPlayableGraph_k__BackingField;
    bool _StartedNewAnimation_k__BackingField;
    RecordableParsingGroup__Enum _ParsingGroup_k__BackingField;

    struct Action_1_UnityEngine_Vector3_* OnProcessRootMotion;
    struct Action_1_UnityEngine_Quaternion_* OnProcessRootRotation;
    struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_* OnPlayAnimation;
    struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_* OnStopAnimation;
    struct Action_2_Moon_FloatAnimationParameter_Single_* OnFloatParameterSet;
    struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_* OnVectorParameterSet;
    struct Action_1_Moon_ClipAnimation_EventMetadata_* OnEvent;
    struct Action* OnEnabled;
    struct Action* OnDisabled;
    struct MoonAnimatorDefinition* Definition;
    struct GameObject* AnimatedObject;
    float LocalObjectScale;
    struct Transform__Array* LocalObjectScaleJoints;
    struct MoonAnimatorDebugConfig DebugConfig;
    int32_t m_updatePriority;
    struct Animator* m_unityAnimator;
    struct PlayableGraph m_playableGraph;
    struct AnimationPlayableOutput m_playableOutput;
    struct AnimationLayerMixerPlayable m_layerMixer;
    struct AnimationParameterSet* m_parameterSet;
    struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata_* m_postprocessChain;
    struct AnimationPostprocessGroupManager* m_postprocessGroupManager;
    struct List_1_Moon_MoonAnimator_Layer_* m_layers;
    bool m_clearing;
    bool m_isValid;
    bool m_isInitializedForParallelUpdate;
    bool m_suspended;
    bool m_initialized;
    bool m_isVisibleCached;
    int32_t m_isVisibleCachedFrame;
    struct Renderer__Array* RenderersForVisibility;
    struct List_1_Moon_MoonAnimator_AnimatorPostprocessData_* m_animatorPostprocessJobDatas;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_ClipAnimation_EventMetadata_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_2_Moon_FloatAnimationParameter_Single_.h>
#include <Modloader/app/structs/Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_.h>
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_AnimationPostprocessMetadata_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_Blend2DInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_BlendInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_ClipInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_DirectBlendInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_Layer_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_LayeredInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_PreviewAnimation_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/MoonAnimatorDefinition.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
