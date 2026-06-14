#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintEnumerator__Fields_DEFINED
struct IEnumerator;
struct Constraint_1;
struct __declspec(align(8)) ConstraintEnumerator__Fields {
    struct IEnumerator* _tables;
    struct IEnumerator* _constraints;
    struct Constraint_1* _currentObject;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Constraint_1.h>
#include <Modloader/app/structs/IEnumerator.h>
#endif
#undef IL2CPP_STRUCT_ConstraintEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
