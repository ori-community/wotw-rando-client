#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleDeletedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleDeletedEventData_DEFINED)
#include <Modloader/app/structs/TitleDeletedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleDeletedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleDeletedEventData_DEFINED
struct TitleDeletedEventData__Class;
struct TitleDeletedEventData {
    struct TitleDeletedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleDeletedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleDeletedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleDeletedEventData_FWDDECL
#include <Modloader/app/structs/TitleDeletedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleDeletedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleDeletedEventData_FWDDECL)
#include <Modloader/app/structs/TitleDeletedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleDeletedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
