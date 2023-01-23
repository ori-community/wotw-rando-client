#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPositionOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPositionOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPositionOverride_DEFINED)
#include <Modloader/app/structs/PlayerPositionOverride__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerPositionOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerPositionOverride_DEFINED
struct PlayerPositionOverride__Class;
struct PlayerPositionOverride {
    struct PlayerPositionOverride__Class* klass;
    MonitorData* monitor;
    struct PlayerPositionOverride__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPositionOverride_FWDDECL)
#define IL2CPP_STRUCT_PlayerPositionOverride_FWDDECL
#include <Modloader/app/structs/PlayerPositionOverride__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPositionOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPositionOverride_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPositionOverride_FWDDECL)
#include <Modloader/app/structs/PlayerPositionOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPositionOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
