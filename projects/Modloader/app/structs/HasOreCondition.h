#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasOreCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasOreCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasOreCondition_DEFINED)
#include <Modloader/app/structs/HasOreCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasOreCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasOreCondition_DEFINED
struct HasOreCondition__Class;
struct HasOreCondition {
    struct HasOreCondition__Class* klass;
    MonitorData* monitor;
    struct HasOreCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasOreCondition_FWDDECL)
#define IL2CPP_STRUCT_HasOreCondition_FWDDECL
#include <Modloader/app/structs/HasOreCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasOreCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasOreCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasOreCondition_FWDDECL)
#include <Modloader/app/structs/HasOreCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasOreCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
