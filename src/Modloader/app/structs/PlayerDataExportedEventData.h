#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDataExportedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDataExportedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDataExportedEventData_DEFINED)
#include <Modloader/app/structs/PlayerDataExportedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDataExportedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDataExportedEventData_DEFINED
struct PlayerDataExportedEventData__Class;
struct PlayerDataExportedEventData {
    struct PlayerDataExportedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerDataExportedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDataExportedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerDataExportedEventData_FWDDECL
#include <Modloader/app/structs/PlayerDataExportedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDataExportedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDataExportedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDataExportedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerDataExportedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDataExportedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
