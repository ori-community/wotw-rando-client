#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrderedDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrderedDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrderedDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_OrderedDictionary__Fields_DEFINED
struct ArrayList;
struct Hashtable;
struct IEqualityComparer;
struct Object;
struct SerializationInfo;
struct __declspec(align(8)) OrderedDictionary__Fields {
    struct ArrayList* _objectsArray;
    struct Hashtable* _objectsTable;
    int32_t _initialCapacity;
    struct IEqualityComparer* _comparer;
    bool _readOnly;
    struct Object* _syncRoot;
    struct SerializationInfo* _siInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_OrderedDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_OrderedDictionary__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#endif
#undef IL2CPP_STRUCT_OrderedDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrderedDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OrderedDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/OrderedDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrderedDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
