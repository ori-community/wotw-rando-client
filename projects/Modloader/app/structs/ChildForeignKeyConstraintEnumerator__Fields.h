#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_DEFINED)
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_ForeignKeyConstraintEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_DEFINED
struct DataTable;
struct ChildForeignKeyConstraintEnumerator__Fields {
    struct ForeignKeyConstraintEnumerator__Fields _;
    struct DataTable* _table;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChildForeignKeyConstraintEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/ChildForeignKeyConstraintEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChildForeignKeyConstraintEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
