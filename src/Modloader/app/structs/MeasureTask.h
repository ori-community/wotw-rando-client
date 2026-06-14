#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeasureTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeasureTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeasureTask_DEFINED)
#include <Modloader/app/structs/MeasureTask__Fields.h>
#if defined(IL2CPP_STRUCT_MeasureTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MeasureTask_DEFINED
struct MeasureTask__Class;
struct MeasureTask {
    struct MeasureTask__Class* klass;
    MonitorData* monitor;
    struct MeasureTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeasureTask_FWDDECL)
#define IL2CPP_STRUCT_MeasureTask_FWDDECL
#include <Modloader/app/structs/MeasureTask__Class.h>
#endif
#undef IL2CPP_STRUCT_MeasureTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeasureTask_DEFINED) && !defined(IL2CPP_STRUCT_MeasureTask_FWDDECL)
#include <Modloader/app/structs/MeasureTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeasureTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
