#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_DEFINED)
#include <Modloader/app/structs/CutsceneState__Fields.h>
#include <Modloader/app/structs/PlayAnimationCutsceneState_FacingMode__Enum.h>
#if defined(IL2CPP_STRUCT_CutsceneState__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayAnimationCutsceneState_FacingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct MoonAnimation;
struct CutsceneState;
struct PlayAnimationCutsceneState__Fields {
    struct CutsceneState__Fields _;
    struct TextureAnimationWithTransitions* AnimationToPlay;
    struct MoonAnimation* NewAnimationToPlay;
    bool Loop;
    PlayAnimationCutsceneState_FacingMode__Enum Facing;

    struct CutsceneState* StateWhenAnimationFinished;
    bool IgnoreCollisions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_FWDDECL
#include <Modloader/app/structs/CutsceneState.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayAnimationCutsceneState__Fields_FWDDECL)
#include <Modloader/app/structs/PlayAnimationCutsceneState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayAnimationCutsceneState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
