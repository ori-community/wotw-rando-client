#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasComponentCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasComponentCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasComponentCondition_DEFINED)
#include <Modloader/app/structs/HasComponentCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasComponentCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasComponentCondition_DEFINED
struct HasComponentCondition__Class;
struct HasComponentCondition {
    struct HasComponentCondition__Class* klass;
    MonitorData* monitor;
    struct HasComponentCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasComponentCondition_FWDDECL)
#define IL2CPP_STRUCT_HasComponentCondition_FWDDECL
#include <Modloader/app/structs/HasComponentCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasComponentCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasComponentCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasComponentCondition_FWDDECL)
#include <Modloader/app/structs/HasComponentCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasComponentCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
