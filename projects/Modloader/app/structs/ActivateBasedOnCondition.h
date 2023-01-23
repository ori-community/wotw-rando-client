#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateBasedOnCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateBasedOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateBasedOnCondition_DEFINED)
#include <Modloader/app/structs/ActivateBasedOnCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateBasedOnCondition_DEFINED
struct ActivateBasedOnCondition__Class;
struct ActivateBasedOnCondition {
    struct ActivateBasedOnCondition__Class* klass;
    MonitorData* monitor;
    struct ActivateBasedOnCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateBasedOnCondition_FWDDECL)
#define IL2CPP_STRUCT_ActivateBasedOnCondition_FWDDECL
#include <Modloader/app/structs/ActivateBasedOnCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateBasedOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateBasedOnCondition_DEFINED) && !defined(IL2CPP_STRUCT_ActivateBasedOnCondition_FWDDECL)
#include <Modloader/app/structs/ActivateBasedOnCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateBasedOnCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
