#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_DEFINED
struct MoonAnimation;
struct __declspec(align(8)) SeinCarry_CarryAnimations__Fields {
    struct MoonAnimation* Drop;
    struct MoonAnimation* FallIdle;
    struct MoonAnimation* FallMoving;
    struct MoonAnimation* JumpIdle;
    struct MoonAnimation* JumpMoving;
    struct MoonAnimation* Pickup;
    struct MoonAnimation* RunIdle;
    struct MoonAnimation* RunMoving;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinCarry_CarryAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/SeinCarry_CarryAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCarry_CarryAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
