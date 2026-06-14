#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemyPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemyPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyPuppet__Fields_DEFINED)
#include <Modloader/app/structs/RecordableObjectPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemyPuppet__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct JumperEnemyPuppet__Fields {
    struct RecordableObjectPuppet__Fields _;
    struct TextureAnimationWithTransitions* Respawn;
    struct TextureAnimationWithTransitions* Idle;
    struct TextureAnimationWithTransitions* JumpCharge;
    struct TextureAnimationWithTransitions* Jump;
    struct TextureAnimationWithTransitions* ShortJump;
    struct TextureAnimationWithTransitions* JumpFlip;
    struct TextureAnimationWithTransitions* Fall;
    struct TextureAnimationWithTransitions* Confused;
    struct TextureAnimationWithTransitions* Thrown;
    struct TextureAnimationWithTransitions* Stomped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemyPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemyPuppet__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemyPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemyPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/JumperEnemyPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemyPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
