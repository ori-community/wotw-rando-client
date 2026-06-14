#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_DEFINED
struct TimeSlicedActivationTask;
struct List_1_UnityEngine_GameObject_;
struct List_1_UnityEngine_Component_;
struct Renderer__Array;
struct SceneRoot;
struct DisableGameObjectWhenOutOfFrustrum__Fields {
    struct MonoBehaviour__Fields _;
    bool Activated;
    bool isArtCell;
    bool tightBounds;
    bool AssumeStationaryTransform;
    float BoundsBorder;
    bool SpecifyBoundingBox;
    struct Rect BoundingBox;
    float BoundingBoxDepth;
    float BoundingBoxDepthOffset;
    bool SpecifyBounds;
    struct Bounds SetBounds;
    struct Vector2 BoundsIncreaseWhenEnabled;
    struct TimeSlicedActivationTask* m_activationTask;
    struct List_1_UnityEngine_GameObject_* m_updateTargetObjectsChildToParent;
    struct List_1_UnityEngine_GameObject_* m_targetObjectsChildToParent;
    struct List_1_UnityEngine_Component_* m_postEnabledObservers;
    struct List_1_UnityEngine_Component_* m_preDisableObservers;
    struct Renderer__Array* m_cachedRenderers;
    struct SceneRoot* m_root;
    bool m_insideFrustum;
    bool m_awakeCalled;
    bool m_needsToRegister;
    struct Bounds m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_FWDDECL)
#define IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/TimeSlicedActivationTask.h>
#endif
#undef IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DisableGameObjectWhenOutOfFrustrum__Fields_FWDDECL)
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
