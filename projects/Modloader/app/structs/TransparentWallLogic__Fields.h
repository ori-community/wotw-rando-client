#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparentWallLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparentWallLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentWallLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TransparentWallLogic__Fields_DEFINED
struct DynamicDataResolver;
struct TransparentWallAnimator;
struct SerializedBooleanUberState;
struct Renderer__Array;
struct Collider;
struct TransparentWallLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct TransparentWallAnimator* Animator;
    bool IsSecret;
    struct SerializedBooleanUberState* State;
    bool m_hasBeenShown;
    float m_senseCheckTimer;
    bool m_lastFrameVisible;
    bool m_beingTriggered;
    struct Renderer__Array* m_renderers;
    bool m_visible;
    struct Collider* m_collider;
    SuspendableMask__Enum _Mask_k__BackingField;

    bool _IsSuspended_k__BackingField;
    bool m_highlighted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparentWallLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparentWallLogic__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/TransparentWallAnimator.h>
#endif
#undef IL2CPP_STRUCT_TransparentWallLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentWallLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparentWallLogic__Fields_FWDDECL)
#include <Modloader/app/structs/TransparentWallLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparentWallLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
