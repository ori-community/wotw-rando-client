#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPuppetAbilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPuppetAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPuppetAbilities_DEFINED)
#include <Modloader/app/structs/PlayerPuppetAbilities__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerPuppetAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerPuppetAbilities_DEFINED
struct PlayerPuppetAbilities__Class;
struct PlayerPuppetAbilities {
    struct PlayerPuppetAbilities__Class* klass;
    MonitorData* monitor;
    struct PlayerPuppetAbilities__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPuppetAbilities_FWDDECL)
#define IL2CPP_STRUCT_PlayerPuppetAbilities_FWDDECL
#include <Modloader/app/structs/PlayerPuppetAbilities__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPuppetAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPuppetAbilities_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPuppetAbilities_FWDDECL)
#include <Modloader/app/structs/PlayerPuppetAbilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPuppetAbilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
