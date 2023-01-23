#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintRotation_DEFINED)
#include <Modloader/app/structs/ConstraintRotation__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintRotation_DEFINED
struct ConstraintRotation__Class;
struct ConstraintRotation {
    struct ConstraintRotation__Class* klass;
    MonitorData* monitor;
    struct ConstraintRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintRotation_FWDDECL)
#define IL2CPP_STRUCT_ConstraintRotation_FWDDECL
#include <Modloader/app/structs/ConstraintRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintRotation_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintRotation_FWDDECL)
#include <Modloader/app/structs/ConstraintRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
