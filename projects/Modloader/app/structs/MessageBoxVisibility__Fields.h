#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBoxVisibility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBoxVisibility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxVisibility__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MessageBoxVisibility__Fields_DEFINED
struct AnimationCurve;
struct UberDelegate;
struct Renderer__Array;
struct Single__Array;
struct MessageBoxVisibility__Fields {
    struct MonoBehaviour__Fields _;
    float TransitionInDuration;
    float TransitionOutDuration;
    float WaitDuration;
    struct AnimationCurve* ScaleIn;
    struct AnimationCurve* OpacityIn;
    struct AnimationCurve* ScaleOut;
    struct AnimationCurve* OpacityOut;
    bool DestroyOnHide;
    struct UberDelegate* OnHide;
    bool IsHint;
    float m_time;
    float m_previousTime;
    float m_timeSpeed;
    float m_delayTime;
    struct Vector3 m_originalScale;
    struct Renderer__Array* m_renderers;
    struct Single__Array* m_rendererAlphas;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBoxVisibility__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageBoxVisibility__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/UberDelegate.h>
#endif
#undef IL2CPP_STRUCT_MessageBoxVisibility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxVisibility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageBoxVisibility__Fields_FWDDECL)
#include <Modloader/app/structs/MessageBoxVisibility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBoxVisibility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
