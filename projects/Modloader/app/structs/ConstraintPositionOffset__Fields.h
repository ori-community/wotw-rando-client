#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintPositionOffset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintPositionOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintPositionOffset__Fields_DEFINED)
#include <Modloader/app/structs/Constraint__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Constraint__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ConstraintPositionOffset__Fields_DEFINED
struct ConstraintPositionOffset__Fields {
    struct Constraint__Fields _;
    struct Vector3 offset;
    struct Vector3 defaultLocalPosition;
    struct Vector3 lastLocalPosition;
    bool initiated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintPositionOffset__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintPositionOffset__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConstraintPositionOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintPositionOffset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintPositionOffset__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintPositionOffset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintPositionOffset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
