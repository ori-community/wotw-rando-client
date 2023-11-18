#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameObjectCollectionBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameObjectCollectionBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameObjectCollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_NameObjectCollectionBase__Fields_DEFINED
struct ArrayList;
struct IEqualityComparer;
struct Hashtable;
struct NameObjectCollectionBase_NameObjectEntry;
struct NameObjectCollectionBase_KeysCollection;
struct SerializationInfo;
struct Object;
struct __declspec(align(8)) NameObjectCollectionBase__Fields {
    bool _readOnly;
    struct ArrayList* _entriesArray;
    struct IEqualityComparer* _keyComparer;
    struct Hashtable* _entriesTable;
    struct NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry;
    struct NameObjectCollectionBase_KeysCollection* _keys;
    struct SerializationInfo* _serializationInfo;
    int32_t _version;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_NameObjectCollectionBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_NameObjectCollectionBase__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/NameObjectCollectionBase_KeysCollection.h>
#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#endif
#undef IL2CPP_STRUCT_NameObjectCollectionBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameObjectCollectionBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NameObjectCollectionBase__Fields_FWDDECL)
#include <Modloader/app/structs/NameObjectCollectionBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameObjectCollectionBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
