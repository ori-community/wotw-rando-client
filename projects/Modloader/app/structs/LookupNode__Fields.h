#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupNode__Fields_DEFINED)
#include <Modloader/app/structs/ExpressionNode__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LookupNode__Fields_DEFINED
struct String;
struct DataColumn;
struct DataRelation;
struct LookupNode__Fields {
    struct ExpressionNode__Fields _;
    struct String* _relationName;
    struct String* _columnName;
    struct DataColumn* _column;
    struct DataRelation* _relation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookupNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_LookupNode__Fields_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LookupNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LookupNode__Fields_FWDDECL)
#include <Modloader/app/structs/LookupNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
