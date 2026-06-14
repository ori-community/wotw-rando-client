#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayCharacterAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayCharacterAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayCharacterAnimation__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct MoonAnimation;
struct Condition_1;
struct PlayCharacterAnimation__Fields {
    struct PerformingAction__Fields _;
    struct TextureAnimationWithTransitions* Animation;
    struct MoonAnimation* NewAnimation;
    struct Condition_1* Condition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayCharacterAnimation__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_PlayCharacterAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayCharacterAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/PlayCharacterAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayCharacterAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
