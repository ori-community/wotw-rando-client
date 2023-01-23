#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_DEFINED
struct GameObject;
struct Event_1;
struct SurfaceToSoundProviderMap;
struct MoonAnimation;
struct SeinDoubleJumpPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct GameObject* DoubleJumpAfterShock;
    struct GameObject* TrippleJumpAfterShock;
    struct Event_1* DoubleJumpSound;
    struct SurfaceToSoundProviderMap* JumpSoundProvider;
    struct MoonAnimation* DoubleJump;
    struct MoonAnimation* Jump;
    struct MoonAnimation* DoubleJumpWithTorch;
    float CanCancelFromTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDoubleJumpPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDoubleJumpPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDoubleJumpPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
