#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_DEFINED)
#include <Modloader/app/structs/CutsceneState__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneState__Fields_DEFINED)
#define IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct CutsceneState;
struct ActionMethod;
struct NormalBackwardsCutsceneState__Fields {
    struct CutsceneState__Fields _;
    struct TextureAnimationWithTransitions* Normal;
    struct TextureAnimationWithTransitions* Backwards;
    struct CutsceneState* Next;
    struct ActionMethod* ActionOnEnter;
    struct ActionMethod* ActionOnExit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_FWDDECL)
#define IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/CutsceneState.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NormalBackwardsCutsceneState__Fields_FWDDECL)
#include <Modloader/app/structs/NormalBackwardsCutsceneState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NormalBackwardsCutsceneState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
