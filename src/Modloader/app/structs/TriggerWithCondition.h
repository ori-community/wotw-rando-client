#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerWithCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerWithCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerWithCondition_DEFINED)
#include <Modloader/app/structs/TriggerWithCondition__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerWithCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerWithCondition_DEFINED
struct TriggerWithCondition__Class;
struct TriggerWithCondition {
    struct TriggerWithCondition__Class* klass;
    MonitorData* monitor;
    struct TriggerWithCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerWithCondition_FWDDECL)
#define IL2CPP_STRUCT_TriggerWithCondition_FWDDECL
#include <Modloader/app/structs/TriggerWithCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerWithCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerWithCondition_DEFINED) && !defined(IL2CPP_STRUCT_TriggerWithCondition_FWDDECL)
#include <Modloader/app/structs/TriggerWithCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerWithCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
