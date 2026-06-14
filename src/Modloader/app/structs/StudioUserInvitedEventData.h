#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StudioUserInvitedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StudioUserInvitedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserInvitedEventData_DEFINED)
#include <Modloader/app/structs/StudioUserInvitedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_StudioUserInvitedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_StudioUserInvitedEventData_DEFINED
struct StudioUserInvitedEventData__Class;
struct StudioUserInvitedEventData {
    struct StudioUserInvitedEventData__Class* klass;
    MonitorData* monitor;
    struct StudioUserInvitedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StudioUserInvitedEventData_FWDDECL)
#define IL2CPP_STRUCT_StudioUserInvitedEventData_FWDDECL
#include <Modloader/app/structs/StudioUserInvitedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_StudioUserInvitedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserInvitedEventData_DEFINED) && !defined(IL2CPP_STRUCT_StudioUserInvitedEventData_FWDDECL)
#include <Modloader/app/structs/StudioUserInvitedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StudioUserInvitedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
