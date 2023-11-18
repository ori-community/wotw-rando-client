#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiverCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiverCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiverCondition_DEFINED)
#include <Modloader/app/structs/DamageReceiverCondition__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReceiverCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiverCondition_DEFINED
struct DamageReceiverCondition__Class;
struct DamageReceiverCondition {
    struct DamageReceiverCondition__Class* klass;
    MonitorData* monitor;
    struct DamageReceiverCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiverCondition_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiverCondition_FWDDECL
#include <Modloader/app/structs/DamageReceiverCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiverCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiverCondition_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiverCondition_FWDDECL)
#include <Modloader/app/structs/DamageReceiverCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiverCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
