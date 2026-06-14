#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompositeTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompositeTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTask_DEFINED)
#include <Modloader/app/structs/CompositeTask__Fields.h>
#if defined(IL2CPP_STRUCT_CompositeTask__Fields_DEFINED)
#define IL2CPP_STRUCT_CompositeTask_DEFINED
struct CompositeTask__Class;
struct CompositeTask {
    struct CompositeTask__Class* klass;
    MonitorData* monitor;
    struct CompositeTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompositeTask_FWDDECL)
#define IL2CPP_STRUCT_CompositeTask_FWDDECL
#include <Modloader/app/structs/CompositeTask__Class.h>
#endif
#undef IL2CPP_STRUCT_CompositeTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTask_DEFINED) && !defined(IL2CPP_STRUCT_CompositeTask_FWDDECL)
#include <Modloader/app/structs/CompositeTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompositeTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
