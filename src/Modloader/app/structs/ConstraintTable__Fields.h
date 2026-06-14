#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintTable__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintTable__Fields_DEFINED
struct DataTable;
struct XmlSchemaIdentityConstraint;
struct __declspec(align(8)) ConstraintTable__Fields {
    struct DataTable* table;
    struct XmlSchemaIdentityConstraint* constraint;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintTable__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#endif
#undef IL2CPP_STRUCT_ConstraintTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintTable__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
