#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_DEFINED
struct BaseAnimator;
struct BaseAnimator__Array;
struct GameObject;
struct PetrifiedOwlAnimationDebugger__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator* Idle;
    struct BaseAnimator__Array* Animators;
    struct GameObject* ZoomOutZone;
    struct Vector2 GUIPosition;
    struct Vector2 GUIButtonSize;
    float GUIButtonBottomMargin;
    bool Enabled;
    struct BaseAnimator* m_lastPlayedAnimator;
    bool m_wasEnabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlAnimationDebugger__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlAnimationDebugger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlAnimationDebugger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
