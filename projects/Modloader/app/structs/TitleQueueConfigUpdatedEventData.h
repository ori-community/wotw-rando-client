#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_DEFINED)
#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_DEFINED
struct TitleQueueConfigUpdatedEventData__Class;
struct TitleQueueConfigUpdatedEventData {
    struct TitleQueueConfigUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleQueueConfigUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_FWDDECL
#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleQueueConfigUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
