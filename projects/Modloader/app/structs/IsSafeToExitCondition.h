#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsSafeToExitCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsSafeToExitCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSafeToExitCondition_DEFINED)
#include <Modloader/app/structs/IsSafeToExitCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsSafeToExitCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsSafeToExitCondition_DEFINED
struct IsSafeToExitCondition__Class;
struct IsSafeToExitCondition {
    struct IsSafeToExitCondition__Class* klass;
    MonitorData* monitor;
    struct IsSafeToExitCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsSafeToExitCondition_FWDDECL)
#define IL2CPP_STRUCT_IsSafeToExitCondition_FWDDECL
#include <Modloader/app/structs/IsSafeToExitCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsSafeToExitCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSafeToExitCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsSafeToExitCondition_FWDDECL)
#include <Modloader/app/structs/IsSafeToExitCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsSafeToExitCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
