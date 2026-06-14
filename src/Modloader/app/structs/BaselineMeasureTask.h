#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaselineMeasureTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaselineMeasureTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask_DEFINED)
#include <Modloader/app/structs/BaselineMeasureTask__Fields.h>
#if defined(IL2CPP_STRUCT_BaselineMeasureTask__Fields_DEFINED)
#define IL2CPP_STRUCT_BaselineMeasureTask_DEFINED
struct BaselineMeasureTask__Class;
struct BaselineMeasureTask {
    struct BaselineMeasureTask__Class* klass;
    MonitorData* monitor;
    struct BaselineMeasureTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask_FWDDECL)
#define IL2CPP_STRUCT_BaselineMeasureTask_FWDDECL
#include <Modloader/app/structs/BaselineMeasureTask__Class.h>
#endif
#undef IL2CPP_STRUCT_BaselineMeasureTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask_DEFINED) && !defined(IL2CPP_STRUCT_BaselineMeasureTask_FWDDECL)
#include <Modloader/app/structs/BaselineMeasureTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaselineMeasureTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
