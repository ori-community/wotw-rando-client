#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlatformMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_DEFINED)
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterPlatformMovement_DEFINED
struct CharacterPlatformMovement__Class;
struct CharacterPlatformMovement {
    struct CharacterPlatformMovement__Class* klass;
    MonitorData* monitor;
    struct CharacterPlatformMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlatformMovement_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlatformMovement_FWDDECL)
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
