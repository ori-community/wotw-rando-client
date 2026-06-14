#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateBoolCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateBoolCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateBoolCondition_DEFINED)
#include <Modloader/app/structs/UberStateBoolCondition__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateBoolCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateBoolCondition_DEFINED
struct UberStateBoolCondition__Class;
struct UberStateBoolCondition {
    struct UberStateBoolCondition__Class* klass;
    MonitorData* monitor;
    struct UberStateBoolCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateBoolCondition_FWDDECL)
#define IL2CPP_STRUCT_UberStateBoolCondition_FWDDECL
#include <Modloader/app/structs/UberStateBoolCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateBoolCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateBoolCondition_DEFINED) && !defined(IL2CPP_STRUCT_UberStateBoolCondition_FWDDECL)
#include <Modloader/app/structs/UberStateBoolCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateBoolCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
