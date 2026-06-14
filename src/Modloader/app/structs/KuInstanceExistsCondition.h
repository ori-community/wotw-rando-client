#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuInstanceExistsCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuInstanceExistsCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuInstanceExistsCondition_DEFINED)
#include <Modloader/app/structs/KuInstanceExistsCondition__Fields.h>
#if defined(IL2CPP_STRUCT_KuInstanceExistsCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_KuInstanceExistsCondition_DEFINED
struct KuInstanceExistsCondition__Class;
struct KuInstanceExistsCondition {
    struct KuInstanceExistsCondition__Class* klass;
    MonitorData* monitor;
    struct KuInstanceExistsCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuInstanceExistsCondition_FWDDECL)
#define IL2CPP_STRUCT_KuInstanceExistsCondition_FWDDECL
#include <Modloader/app/structs/KuInstanceExistsCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_KuInstanceExistsCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuInstanceExistsCondition_DEFINED) && !defined(IL2CPP_STRUCT_KuInstanceExistsCondition_FWDDECL)
#include <Modloader/app/structs/KuInstanceExistsCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuInstanceExistsCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
