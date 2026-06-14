#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTypeCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTypeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeCondition_DEFINED)
#include <Modloader/app/structs/DamageTypeCondition__Fields.h>
#if defined(IL2CPP_STRUCT_DamageTypeCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageTypeCondition_DEFINED
struct DamageTypeCondition__Class;
struct DamageTypeCondition {
    struct DamageTypeCondition__Class* klass;
    MonitorData* monitor;
    struct DamageTypeCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTypeCondition_FWDDECL)
#define IL2CPP_STRUCT_DamageTypeCondition_FWDDECL
#include <Modloader/app/structs/DamageTypeCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageTypeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeCondition_DEFINED) && !defined(IL2CPP_STRUCT_DamageTypeCondition_FWDDECL)
#include <Modloader/app/structs/DamageTypeCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTypeCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
