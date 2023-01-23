#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasKeystonesCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasKeystonesCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasKeystonesCondition_DEFINED)
#include <Modloader/app/structs/HasKeystonesCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasKeystonesCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasKeystonesCondition_DEFINED
struct HasKeystonesCondition__Class;
struct HasKeystonesCondition {
    struct HasKeystonesCondition__Class* klass;
    MonitorData* monitor;
    struct HasKeystonesCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasKeystonesCondition_FWDDECL)
#define IL2CPP_STRUCT_HasKeystonesCondition_FWDDECL
#include <Modloader/app/structs/HasKeystonesCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasKeystonesCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasKeystonesCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasKeystonesCondition_FWDDECL)
#include <Modloader/app/structs/HasKeystonesCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasKeystonesCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
