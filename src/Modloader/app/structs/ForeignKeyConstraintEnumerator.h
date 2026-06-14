#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_DEFINED)
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_ForeignKeyConstraintEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_DEFINED
struct ForeignKeyConstraintEnumerator__Class;
struct ForeignKeyConstraintEnumerator {
    struct ForeignKeyConstraintEnumerator__Class* klass;
    MonitorData* monitor;
    struct ForeignKeyConstraintEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_FWDDECL)
#define IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_FWDDECL
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_ForeignKeyConstraintEnumerator_FWDDECL)
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
