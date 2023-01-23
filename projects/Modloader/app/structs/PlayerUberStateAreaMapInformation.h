#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_DEFINED)
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_DEFINED
struct PlayerUberStateAreaMapInformation__Class;
struct PlayerUberStateAreaMapInformation {
    struct PlayerUberStateAreaMapInformation__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateAreaMapInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_FWDDECL
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
