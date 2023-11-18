#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStatisticDeletedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStatisticDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticDeletedEventData_DEFINED)
#include <Modloader/app/structs/PlayerStatisticDeletedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerStatisticDeletedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerStatisticDeletedEventData_DEFINED
struct PlayerStatisticDeletedEventData__Class;
struct PlayerStatisticDeletedEventData {
    struct PlayerStatisticDeletedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerStatisticDeletedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStatisticDeletedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerStatisticDeletedEventData_FWDDECL
#include <Modloader/app/structs/PlayerStatisticDeletedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStatisticDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticDeletedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStatisticDeletedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerStatisticDeletedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStatisticDeletedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
