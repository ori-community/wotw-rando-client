#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReceivedDamageCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReceivedDamageCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReceivedDamageCondition_DEFINED)
#include <Modloader/app/structs/ReceivedDamageCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ReceivedDamageCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ReceivedDamageCondition_DEFINED
struct ReceivedDamageCondition__Class;
struct ReceivedDamageCondition {
    struct ReceivedDamageCondition__Class* klass;
    MonitorData* monitor;
    struct ReceivedDamageCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReceivedDamageCondition_FWDDECL)
#define IL2CPP_STRUCT_ReceivedDamageCondition_FWDDECL
#include <Modloader/app/structs/ReceivedDamageCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ReceivedDamageCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReceivedDamageCondition_DEFINED) && !defined(IL2CPP_STRUCT_ReceivedDamageCondition_FWDDECL)
#include <Modloader/app/structs/ReceivedDamageCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReceivedDamageCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
