#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxPlatformingMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxPlatformingMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxPlatformingMovement__Fields_DEFINED)
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxPlatformingMovement__Fields_DEFINED
struct Kickback;
struct FoxPlatformingMovement__Fields {
    struct CharacterPlatformMovement__Fields _;
    struct Kickback* Kickback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxPlatformingMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_FoxPlatformingMovement__Fields_FWDDECL
#include <Modloader/app/structs/Kickback.h>
#endif
#undef IL2CPP_STRUCT_FoxPlatformingMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxPlatformingMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FoxPlatformingMovement__Fields_FWDDECL)
#include <Modloader/app/structs/FoxPlatformingMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxPlatformingMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
