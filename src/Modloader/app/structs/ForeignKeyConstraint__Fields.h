#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForeignKeyConstraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForeignKeyConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraint__Fields_DEFINED)
#include <Modloader/app/structs/AcceptRejectRule__Enum.h>
#include <Modloader/app/structs/Constraint_1__Fields.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/Rule__Enum.h>
#if defined(IL2CPP_STRUCT_Constraint_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rule__Enum_DEFINED) && defined(IL2CPP_STRUCT_AcceptRejectRule__Enum_DEFINED) && defined(IL2CPP_STRUCT_DataKey_DEFINED)
#define IL2CPP_STRUCT_ForeignKeyConstraint__Fields_DEFINED
struct String;
struct String__Array;
struct ForeignKeyConstraint__Fields {
    struct Constraint_1__Fields _;
    Rule__Enum _deleteRule;

    Rule__Enum _updateRule;

    AcceptRejectRule__Enum _acceptRejectRule;

    struct DataKey _childKey;
    struct DataKey _parentKey;
    struct String* _constraintName;
    struct String__Array* _parentColumnNames;
    struct String__Array* _childColumnNames;
    struct String* _parentTableName;
    struct String* _parentTableNamespace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_ForeignKeyConstraint__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ForeignKeyConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ForeignKeyConstraint__Fields_FWDDECL)
#include <Modloader/app/structs/ForeignKeyConstraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForeignKeyConstraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
