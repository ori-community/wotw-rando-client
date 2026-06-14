#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingCutsceneState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingCutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingCutsceneState__Fields_DEFINED)
#include <Modloader/app/structs/CutsceneState__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneState__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingCutsceneState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct GameObject__Array;
struct MovingCutsceneState__Fields {
    struct CutsceneState__Fields _;
    struct TextureAnimationWithTransitions* Moving;
    struct TextureAnimationWithTransitions* Idle;
    bool m_enteringTransitionFinished;
    float ForceMoveLeftTime;
    struct GameObject__Array* BlockingMovingLeftZones;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingCutsceneState__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovingCutsceneState__Fields_FWDDECL
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_MovingCutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingCutsceneState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovingCutsceneState__Fields_FWDDECL)
#include <Modloader/app/structs/MovingCutsceneState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingCutsceneState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
