#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_DEFINED)
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_DEFINED
struct PlayerReportedAsAbusiveEventData__Class;
struct PlayerReportedAsAbusiveEventData {
    struct PlayerReportedAsAbusiveEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerReportedAsAbusiveEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_FWDDECL
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerReportedAsAbusiveEventData_FWDDECL)
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
