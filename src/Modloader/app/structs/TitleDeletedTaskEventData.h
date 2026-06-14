#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleDeletedTaskEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleDeletedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleDeletedTaskEventData_DEFINED)
#include <Modloader/app/structs/TitleDeletedTaskEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleDeletedTaskEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleDeletedTaskEventData_DEFINED
struct TitleDeletedTaskEventData__Class;
struct TitleDeletedTaskEventData {
    struct TitleDeletedTaskEventData__Class* klass;
    MonitorData* monitor;
    struct TitleDeletedTaskEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleDeletedTaskEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleDeletedTaskEventData_FWDDECL
#include <Modloader/app/structs/TitleDeletedTaskEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleDeletedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleDeletedTaskEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleDeletedTaskEventData_FWDDECL)
#include <Modloader/app/structs/TitleDeletedTaskEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleDeletedTaskEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
