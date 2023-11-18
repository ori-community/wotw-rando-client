#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UniqueConstraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UniqueConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UniqueConstraint__Fields_DEFINED)
#include <Modloader/app/structs/Constraint_1__Fields.h>
#include <Modloader/app/structs/DataKey.h>
#if defined(IL2CPP_STRUCT_Constraint_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_DataKey_DEFINED)
#define IL2CPP_STRUCT_UniqueConstraint__Fields_DEFINED
struct Index;
struct String;
struct String__Array;
struct UniqueConstraint__Fields {
    struct Constraint_1__Fields _;
    struct DataKey _key;
    struct Index* _constraintIndex;
    bool _bPrimaryKey;
    struct String* _constraintName;
    struct String__Array* _columnNames;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UniqueConstraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_UniqueConstraint__Fields_FWDDECL
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_UniqueConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UniqueConstraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UniqueConstraint__Fields_FWDDECL)
#include <Modloader/app/structs/UniqueConstraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UniqueConstraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
