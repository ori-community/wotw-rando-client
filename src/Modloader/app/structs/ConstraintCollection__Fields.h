#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintCollection__Fields_DEFINED
struct DataTable;
struct ArrayList;
struct CollectionChangeEventHandler;
struct Constraint_1__Array;
struct __declspec(align(8)) ConstraintCollection__Fields {
    struct DataTable* _table;
    struct ArrayList* _list;
    int32_t _defaultNameIndex;
    struct CollectionChangeEventHandler* _onCollectionChanged;
    struct Constraint_1__Array* _delayLoadingConstraints;
    bool _fLoadForeignKeyConstraintsOnly;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/Constraint_1__Array.h>
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_ConstraintCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintCollection__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
