#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStatisticChangedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStatisticChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticChangedEventData_DEFINED)
#include <Modloader/app/structs/PlayerStatisticChangedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerStatisticChangedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerStatisticChangedEventData_DEFINED
struct PlayerStatisticChangedEventData__Class;
struct PlayerStatisticChangedEventData {
    struct PlayerStatisticChangedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerStatisticChangedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStatisticChangedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerStatisticChangedEventData_FWDDECL
#include <Modloader/app/structs/PlayerStatisticChangedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStatisticChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticChangedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStatisticChangedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerStatisticChangedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStatisticChangedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
