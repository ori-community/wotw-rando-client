#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Constraint_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Constraint_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Constraint_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Constraint_1__Fields_DEFINED
struct String;
struct DataSet;
struct PropertyCollection;
struct __declspec(align(8)) Constraint_1__Fields {
    struct String* _schemaName;
    bool _inCollection;
    struct DataSet* _dataSet;
    struct String* _name;
    struct PropertyCollection* _extendedProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_Constraint_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Constraint_1__Fields_FWDDECL
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Constraint_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Constraint_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Constraint_1__Fields_FWDDECL)
#include <Modloader/app/structs/Constraint_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Constraint_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
