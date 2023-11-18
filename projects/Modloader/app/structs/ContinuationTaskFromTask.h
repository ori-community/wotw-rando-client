#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContinuationTaskFromTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContinuationTaskFromTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuationTaskFromTask_DEFINED)
#include <Modloader/app/structs/ContinuationTaskFromTask__Fields.h>
#if defined(IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_DEFINED)
#define IL2CPP_STRUCT_ContinuationTaskFromTask_DEFINED
struct ContinuationTaskFromTask__Class;
struct ContinuationTaskFromTask {
    struct ContinuationTaskFromTask__Class* klass;
    MonitorData* monitor;
    struct ContinuationTaskFromTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContinuationTaskFromTask_FWDDECL)
#define IL2CPP_STRUCT_ContinuationTaskFromTask_FWDDECL
#include <Modloader/app/structs/ContinuationTaskFromTask__Class.h>
#endif
#undef IL2CPP_STRUCT_ContinuationTaskFromTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuationTaskFromTask_DEFINED) && !defined(IL2CPP_STRUCT_ContinuationTaskFromTask_FWDDECL)
#include <Modloader/app/structs/ContinuationTaskFromTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContinuationTaskFromTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
