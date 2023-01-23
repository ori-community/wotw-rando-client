#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleNewsUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleNewsUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleNewsUpdatedEventData_DEFINED)
#include <Modloader/app/structs/TitleNewsUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleNewsUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleNewsUpdatedEventData_DEFINED
struct TitleNewsUpdatedEventData__Class;
struct TitleNewsUpdatedEventData {
    struct TitleNewsUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleNewsUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleNewsUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleNewsUpdatedEventData_FWDDECL
#include <Modloader/app/structs/TitleNewsUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleNewsUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleNewsUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleNewsUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/TitleNewsUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleNewsUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
