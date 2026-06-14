#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEnumerator_DEFINED)
#include <Modloader/app/structs/ConstraintEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintEnumerator_DEFINED
struct ConstraintEnumerator__Class;
struct ConstraintEnumerator {
    struct ConstraintEnumerator__Class* klass;
    MonitorData* monitor;
    struct ConstraintEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintEnumerator_FWDDECL)
#define IL2CPP_STRUCT_ConstraintEnumerator_FWDDECL
#include <Modloader/app/structs/ConstraintEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintEnumerator_FWDDECL)
#include <Modloader/app/structs/ConstraintEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
