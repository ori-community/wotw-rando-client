#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierSampleTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierSampleTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierSampleTask_DEFINED)
#include <Modloader/app/structs/ModifierSampleTask__Fields.h>
#if defined(IL2CPP_STRUCT_ModifierSampleTask__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifierSampleTask_DEFINED
struct ModifierSampleTask__Class;
struct ModifierSampleTask {
    struct ModifierSampleTask__Class* klass;
    MonitorData* monitor;
    struct ModifierSampleTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifierSampleTask_FWDDECL)
#define IL2CPP_STRUCT_ModifierSampleTask_FWDDECL
#include <Modloader/app/structs/ModifierSampleTask__Class.h>
#endif
#undef IL2CPP_STRUCT_ModifierSampleTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierSampleTask_DEFINED) && !defined(IL2CPP_STRUCT_ModifierSampleTask_FWDDECL)
#include <Modloader/app/structs/ModifierSampleTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierSampleTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
