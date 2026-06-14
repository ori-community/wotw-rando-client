#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_DEFINED
struct MoonAnimation;
struct __declspec(align(8)) SeinGrenadeAttack_QuickThrowAnimations__Fields {
    struct MoonAnimation* FallIdleThrow;
    struct MoonAnimation* FallThrow;
    struct MoonAnimation* RunThrow;
    struct MoonAnimation* JogThrow;
    struct MoonAnimation* WalkThrow;
    struct MoonAnimation* JumpThrow;
    struct MoonAnimation* JumpIdleThrow;
    struct MoonAnimation* IdleThrow;
    struct MoonAnimation* WallThrow;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrenadeAttack_QuickThrowAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrenadeAttack_QuickThrowAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrenadeAttack_QuickThrowAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
