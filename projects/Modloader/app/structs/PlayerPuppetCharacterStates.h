#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPuppetCharacterStates_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPuppetCharacterStates_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates_DEFINED)
#include <Modloader/app/structs/PlayerPuppetCharacterStates__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerPuppetCharacterStates_DEFINED
struct PlayerPuppetCharacterStates__Class;
struct PlayerPuppetCharacterStates {
    struct PlayerPuppetCharacterStates__Class* klass;
    MonitorData* monitor;
    struct PlayerPuppetCharacterStates__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates_FWDDECL)
#define IL2CPP_STRUCT_PlayerPuppetCharacterStates_FWDDECL
#include <Modloader/app/structs/PlayerPuppetCharacterStates__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPuppetCharacterStates_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates_FWDDECL)
#include <Modloader/app/structs/PlayerPuppetCharacterStates.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPuppetCharacterStates.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
