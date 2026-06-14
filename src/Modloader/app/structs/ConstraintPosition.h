#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintPosition_DEFINED)
#include <Modloader/app/structs/ConstraintPosition__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintPosition_DEFINED
struct ConstraintPosition__Class;
struct ConstraintPosition {
    struct ConstraintPosition__Class* klass;
    MonitorData* monitor;
    struct ConstraintPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintPosition_FWDDECL)
#define IL2CPP_STRUCT_ConstraintPosition_FWDDECL
#include <Modloader/app/structs/ConstraintPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintPosition_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintPosition_FWDDECL)
#include <Modloader/app/structs/ConstraintPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
