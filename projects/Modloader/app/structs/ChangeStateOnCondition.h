#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeStateOnCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeStateOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition_DEFINED)
#include <Modloader/app/structs/ChangeStateOnCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeStateOnCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeStateOnCondition_DEFINED
struct ChangeStateOnCondition__Class;
struct ChangeStateOnCondition {
    struct ChangeStateOnCondition__Class* klass;
    MonitorData* monitor;
    struct ChangeStateOnCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition_FWDDECL)
#define IL2CPP_STRUCT_ChangeStateOnCondition_FWDDECL
#include <Modloader/app/structs/ChangeStateOnCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeStateOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition_DEFINED) && !defined(IL2CPP_STRUCT_ChangeStateOnCondition_FWDDECL)
#include <Modloader/app/structs/ChangeStateOnCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeStateOnCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
