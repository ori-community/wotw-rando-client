#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProtectedByShellCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProtectedByShellCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectedByShellCondition_DEFINED)
#include <Modloader/app/structs/ProtectedByShellCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ProtectedByShellCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ProtectedByShellCondition_DEFINED
struct ProtectedByShellCondition__Class;
struct ProtectedByShellCondition {
    struct ProtectedByShellCondition__Class* klass;
    MonitorData* monitor;
    struct ProtectedByShellCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProtectedByShellCondition_FWDDECL)
#define IL2CPP_STRUCT_ProtectedByShellCondition_FWDDECL
#include <Modloader/app/structs/ProtectedByShellCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ProtectedByShellCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectedByShellCondition_DEFINED) && !defined(IL2CPP_STRUCT_ProtectedByShellCondition_FWDDECL)
#include <Modloader/app/structs/ProtectedByShellCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProtectedByShellCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
