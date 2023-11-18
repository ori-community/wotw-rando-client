#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionPerformingCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionPerformingCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionPerformingCondition_DEFINED)
#include <Modloader/app/structs/ActionPerformingCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ActionPerformingCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionPerformingCondition_DEFINED
struct ActionPerformingCondition__Class;
struct ActionPerformingCondition {
    struct ActionPerformingCondition__Class* klass;
    MonitorData* monitor;
    struct ActionPerformingCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionPerformingCondition_FWDDECL)
#define IL2CPP_STRUCT_ActionPerformingCondition_FWDDECL
#include <Modloader/app/structs/ActionPerformingCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionPerformingCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionPerformingCondition_DEFINED) && !defined(IL2CPP_STRUCT_ActionPerformingCondition_FWDDECL)
#include <Modloader/app/structs/ActionPerformingCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionPerformingCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
