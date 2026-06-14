#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreparationTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreparationTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreparationTask_DEFINED)
#include <Modloader/app/structs/PreparationTask__Fields.h>
#if defined(IL2CPP_STRUCT_PreparationTask__Fields_DEFINED)
#define IL2CPP_STRUCT_PreparationTask_DEFINED
struct PreparationTask__Class;
struct PreparationTask {
    struct PreparationTask__Class* klass;
    MonitorData* monitor;
    struct PreparationTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreparationTask_FWDDECL)
#define IL2CPP_STRUCT_PreparationTask_FWDDECL
#include <Modloader/app/structs/PreparationTask__Class.h>
#endif
#undef IL2CPP_STRUCT_PreparationTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreparationTask_DEFINED) && !defined(IL2CPP_STRUCT_PreparationTask_FWDDECL)
#include <Modloader/app/structs/PreparationTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreparationTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
