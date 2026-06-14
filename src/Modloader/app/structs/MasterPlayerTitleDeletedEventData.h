#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_DEFINED)
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_DEFINED
struct MasterPlayerTitleDeletedEventData__Class;
struct MasterPlayerTitleDeletedEventData {
    struct MasterPlayerTitleDeletedEventData__Class* klass;
    MonitorData* monitor;
    struct MasterPlayerTitleDeletedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_FWDDECL)
#define IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_FWDDECL
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_DEFINED) && !defined(IL2CPP_STRUCT_MasterPlayerTitleDeletedEventData_FWDDECL)
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
