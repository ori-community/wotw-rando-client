#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintPositionOffset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintPositionOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintPositionOffset_DEFINED)
#include <Modloader/app/structs/ConstraintPositionOffset__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintPositionOffset__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintPositionOffset_DEFINED
struct ConstraintPositionOffset__Class;
struct ConstraintPositionOffset {
    struct ConstraintPositionOffset__Class* klass;
    MonitorData* monitor;
    struct ConstraintPositionOffset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintPositionOffset_FWDDECL)
#define IL2CPP_STRUCT_ConstraintPositionOffset_FWDDECL
#include <Modloader/app/structs/ConstraintPositionOffset__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintPositionOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintPositionOffset_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintPositionOffset_FWDDECL)
#include <Modloader/app/structs/ConstraintPositionOffset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintPositionOffset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
