#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityFilesSetEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityFilesSetEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFilesSetEventData_DEFINED)
#include <Modloader/app/structs/EntityFilesSetEventData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityFilesSetEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityFilesSetEventData_DEFINED
struct EntityFilesSetEventData__Class;
struct EntityFilesSetEventData {
    struct EntityFilesSetEventData__Class* klass;
    MonitorData* monitor;
    struct EntityFilesSetEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityFilesSetEventData_FWDDECL)
#define IL2CPP_STRUCT_EntityFilesSetEventData_FWDDECL
#include <Modloader/app/structs/EntityFilesSetEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityFilesSetEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFilesSetEventData_DEFINED) && !defined(IL2CPP_STRUCT_EntityFilesSetEventData_FWDDECL)
#include <Modloader/app/structs/EntityFilesSetEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityFilesSetEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
