#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPushAgainstWall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPushAgainstWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPushAgainstWall__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPushAgainstWall__Fields_DEFINED
struct MoonAnimation;
struct Func_1_Boolean_;
struct SeinPushAgainstWall__Fields {
    struct CharacterState__Fields _;
    struct MoonAnimation* Idle;
    struct MoonAnimation* PushAgainstWall;
    struct Func_1_Boolean_* m_shouldPushKeepPlaying;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPushAgainstWall__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPushAgainstWall__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinPushAgainstWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPushAgainstWall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPushAgainstWall__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPushAgainstWall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPushAgainstWall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
