#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateAbilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_DEFINED)
#include <Modloader/app/structs/PlayerUberStateAbilities__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateAbilities_DEFINED
struct PlayerUberStateAbilities__Class;
struct PlayerUberStateAbilities {
    struct PlayerUberStateAbilities__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateAbilities__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateAbilities_FWDDECL
#include <Modloader/app/structs/PlayerUberStateAbilities__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateAbilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateAbilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
