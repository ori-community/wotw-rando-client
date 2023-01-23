#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable_bucket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable_bucket_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_bucket_DEFINED)
#define IL2CPP_STRUCT_Hashtable_bucket_DEFINED
struct Object;
struct Hashtable_bucket {
    struct Object* key;
    struct Object* val;
    int32_t hash_coll;
};
#endif
#if !defined(IL2CPP_STRUCT_Hashtable_bucket_FWDDECL)
#define IL2CPP_STRUCT_Hashtable_bucket_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Hashtable_bucket_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_bucket_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable_bucket_FWDDECL)
#include <Modloader/app/structs/Hashtable_bucket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable_bucket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
