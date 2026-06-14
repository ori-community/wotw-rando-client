#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable__Fields_DEFINED)
#define IL2CPP_STRUCT_Hashtable__Fields_DEFINED
struct Hashtable_bucket__Array;
struct ICollection;
struct IEqualityComparer;
struct Object;
struct __declspec(align(8)) Hashtable__Fields {
    struct Hashtable_bucket__Array* buckets;
    int32_t count;
    int32_t occupancy;
    int32_t loadsize;
    float loadFactor;
    int32_t version;
    bool isWriterInProgress;
    struct ICollection* keys;
    struct ICollection* values;
    struct IEqualityComparer* _keycomparer;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_Hashtable__Fields_FWDDECL)
#define IL2CPP_STRUCT_Hashtable__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable_bucket__Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Hashtable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable__Fields_FWDDECL)
#include <Modloader/app/structs/Hashtable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
