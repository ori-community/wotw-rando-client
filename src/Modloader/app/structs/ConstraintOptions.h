#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintOptions_DEFINED)
#include <Modloader/app/structs/ConstraintOptions__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintOptions_DEFINED
struct ConstraintOptions__Class;
struct ConstraintOptions {
    struct ConstraintOptions__Class* klass;
    MonitorData* monitor;
    struct ConstraintOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintOptions_FWDDECL)
#define IL2CPP_STRUCT_ConstraintOptions_FWDDECL
#include <Modloader/app/structs/ConstraintOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintOptions_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintOptions_FWDDECL)
#include <Modloader/app/structs/ConstraintOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
