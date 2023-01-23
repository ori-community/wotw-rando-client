#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_DEFINED)
#include <Modloader/app/structs/DataRelationCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataRelationCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_DEFINED
struct DataSet;
struct ArrayList;
struct DataRelation__Array;
struct DataRelationCollection_DataSetRelationCollection__Fields {
    struct DataRelationCollection__Fields _;
    struct DataSet* _dataSet;
    struct ArrayList* _relations;
    struct DataRelation__Array* _delayLoadingRelations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataRelation__Array.h>
#include <Modloader/app/structs/DataSet.h>
#endif
#undef IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRelationCollection_DataSetRelationCollection__Fields_FWDDECL)
#include <Modloader/app/structs/DataRelationCollection_DataSetRelationCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelationCollection_DataSetRelationCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
