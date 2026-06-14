#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintRotationOffset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintRotationOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintRotationOffset_DEFINED)
#include <Modloader/app/structs/ConstraintRotationOffset__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintRotationOffset__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintRotationOffset_DEFINED
struct ConstraintRotationOffset__Class;
struct ConstraintRotationOffset {
    struct ConstraintRotationOffset__Class* klass;
    MonitorData* monitor;
    struct ConstraintRotationOffset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintRotationOffset_FWDDECL)
#define IL2CPP_STRUCT_ConstraintRotationOffset_FWDDECL
#include <Modloader/app/structs/ConstraintRotationOffset__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintRotationOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintRotationOffset_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintRotationOffset_FWDDECL)
#include <Modloader/app/structs/ConstraintRotationOffset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintRotationOffset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
