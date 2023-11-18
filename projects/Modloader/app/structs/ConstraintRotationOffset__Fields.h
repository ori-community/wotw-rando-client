#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintRotationOffset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintRotationOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintRotationOffset__Fields_DEFINED)
#include <Modloader/app/structs/Constraint__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_Constraint__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_ConstraintRotationOffset__Fields_DEFINED
struct ConstraintRotationOffset__Fields {
    struct Constraint__Fields _;
    struct Quaternion Offset;
    struct Quaternion m_defaultLocalRotation;
    struct Quaternion m_lastLocalRotation;
    bool m_initiated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintRotationOffset__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintRotationOffset__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConstraintRotationOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintRotationOffset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintRotationOffset__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintRotationOffset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintRotationOffset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
