#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasShardCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasShardCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasShardCondition_DEFINED)
#include <Modloader/app/structs/HasShardCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasShardCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasShardCondition_DEFINED
struct HasShardCondition__Class;
struct HasShardCondition {
    struct HasShardCondition__Class* klass;
    MonitorData* monitor;
    struct HasShardCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasShardCondition_FWDDECL)
#define IL2CPP_STRUCT_HasShardCondition_FWDDECL
#include <Modloader/app/structs/HasShardCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasShardCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasShardCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasShardCondition_FWDDECL)
#include <Modloader/app/structs/HasShardCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasShardCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
