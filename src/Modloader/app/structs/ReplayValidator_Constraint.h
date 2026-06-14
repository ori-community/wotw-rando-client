#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidator_Constraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidator_Constraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint_DEFINED)
#include <Modloader/app/structs/ReplayValidator_Constraint__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayValidator_Constraint_DEFINED
struct ReplayValidator_Constraint__Class;
struct ReplayValidator_Constraint {
    struct ReplayValidator_Constraint__Class* klass;
    MonitorData* monitor;
    struct ReplayValidator_Constraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidator_Constraint_FWDDECL
#include <Modloader/app/structs/ReplayValidator_Constraint__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidator_Constraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidator_Constraint_FWDDECL)
#include <Modloader/app/structs/ReplayValidator_Constraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidator_Constraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
