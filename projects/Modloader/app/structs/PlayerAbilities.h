#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAbilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAbilities_DEFINED)
#include <Modloader/app/structs/PlayerAbilities__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAbilities_DEFINED
struct PlayerAbilities__Class;
struct PlayerAbilities {
    struct PlayerAbilities__Class* klass;
    MonitorData* monitor;
    struct PlayerAbilities__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAbilities_FWDDECL)
#define IL2CPP_STRUCT_PlayerAbilities_FWDDECL
#include <Modloader/app/structs/PlayerAbilities__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAbilities_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAbilities_FWDDECL)
#include <Modloader/app/structs/PlayerAbilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAbilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
