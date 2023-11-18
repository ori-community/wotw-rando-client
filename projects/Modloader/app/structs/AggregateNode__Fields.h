#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggregateNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggregateNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateNode__Fields_DEFINED)
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/Aggregate__Enum.h>
#include <Modloader/app/structs/ExpressionNode__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_AggregateType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Aggregate__Enum_DEFINED)
#define IL2CPP_STRUCT_AggregateNode__Fields_DEFINED
struct String;
struct DataTable;
struct DataColumn;
struct DataRelation;
struct AggregateNode__Fields {
    struct ExpressionNode__Fields _;
    AggregateType__Enum _type;

    Aggregate__Enum _aggregate;

    bool _local;
    struct String* _relationName;
    struct String* _columnName;
    struct DataTable* _childTable;
    struct DataColumn* _column;
    struct DataRelation* _relation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AggregateNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_AggregateNode__Fields_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AggregateNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AggregateNode__Fields_FWDDECL)
#include <Modloader/app/structs/AggregateNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggregateNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
