#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FinishTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FinishTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinishTask_DEFINED)
#include <Modloader/app/structs/FinishTask__Fields.h>
#if defined(IL2CPP_STRUCT_FinishTask__Fields_DEFINED)
#define IL2CPP_STRUCT_FinishTask_DEFINED
struct FinishTask__Class;
struct FinishTask {
    struct FinishTask__Class* klass;
    MonitorData* monitor;
    struct FinishTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FinishTask_FWDDECL)
#define IL2CPP_STRUCT_FinishTask_FWDDECL
#include <Modloader/app/structs/FinishTask__Class.h>
#endif
#undef IL2CPP_STRUCT_FinishTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinishTask_DEFINED) && !defined(IL2CPP_STRUCT_FinishTask_FWDDECL)
#include <Modloader/app/structs/FinishTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FinishTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
