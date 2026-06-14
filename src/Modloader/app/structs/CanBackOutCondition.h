#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanBackOutCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanBackOutCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanBackOutCondition_DEFINED)
#include <Modloader/app/structs/CanBackOutCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CanBackOutCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CanBackOutCondition_DEFINED
struct CanBackOutCondition__Class;
struct CanBackOutCondition {
    struct CanBackOutCondition__Class* klass;
    MonitorData* monitor;
    struct CanBackOutCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanBackOutCondition_FWDDECL)
#define IL2CPP_STRUCT_CanBackOutCondition_FWDDECL
#include <Modloader/app/structs/CanBackOutCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CanBackOutCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanBackOutCondition_DEFINED) && !defined(IL2CPP_STRUCT_CanBackOutCondition_FWDDECL)
#include <Modloader/app/structs/CanBackOutCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanBackOutCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
