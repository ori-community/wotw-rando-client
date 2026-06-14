#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasAreaMapCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasAreaMapCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasAreaMapCondition_DEFINED)
#include <Modloader/app/structs/HasAreaMapCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasAreaMapCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasAreaMapCondition_DEFINED
struct HasAreaMapCondition__Class;
struct HasAreaMapCondition {
    struct HasAreaMapCondition__Class* klass;
    MonitorData* monitor;
    struct HasAreaMapCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasAreaMapCondition_FWDDECL)
#define IL2CPP_STRUCT_HasAreaMapCondition_FWDDECL
#include <Modloader/app/structs/HasAreaMapCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasAreaMapCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasAreaMapCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasAreaMapCondition_FWDDECL)
#include <Modloader/app/structs/HasAreaMapCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasAreaMapCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
