#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_DEFINED
struct AnimationCurve;
struct Renderer;
struct GUITexture;
struct MessageBoxMessageScreen__Fields {
    struct Suspendable__Fields _;
    struct AnimationCurve* ScaleIn;
    struct AnimationCurve* OpacityIn;
    struct AnimationCurve* ScaleOut;
    struct AnimationCurve* OpacityOut;
    float TransitionInDuration;
    float TransitionOutDuration;
    float WaitDuration;
    float m_time;
    float m_timeSpeed;
    float m_delayTime;
    bool m_fadingOut;
    struct Vector3 m_originalScale;
    struct Renderer* m_renderer;
    struct GUITexture* m_guiTexture;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GUITexture.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_FWDDECL)
#include <Modloader/app/structs/MessageBoxMessageScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBoxMessageScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
