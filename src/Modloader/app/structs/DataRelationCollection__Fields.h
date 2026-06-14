#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelationCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelationCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelationCollection__Fields_DEFINED
struct DataRelation;
struct CollectionChangeEventHandler;
struct __declspec(align(8)) DataRelationCollection__Fields {
    struct DataRelation* _inTransition;
    int32_t _defaultNameIndex;
    struct CollectionChangeEventHandler* _onCollectionChangedDelegate;
    struct CollectionChangeEventHandler* _onCollectionChangingDelegate;
    int32_t _objectID;
};
#endif
#if !defined(IL2CPP_STRUCT_DataRelationCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRelationCollection__Fields_FWDDECL
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/DataRelation.h>
#endif
#undef IL2CPP_STRUCT_DataRelationCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRelationCollection__Fields_FWDDECL)
#include <Modloader/app/structs/DataRelationCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelationCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
