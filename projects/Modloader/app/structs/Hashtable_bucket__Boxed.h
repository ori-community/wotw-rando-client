#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable_bucket__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable_bucket__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_bucket__Boxed_DEFINED)
#include <Modloader/app/structs/Hashtable_bucket.h>
#if defined(IL2CPP_STRUCT_Hashtable_bucket_DEFINED)
#define IL2CPP_STRUCT_Hashtable_bucket__Boxed_DEFINED
struct Hashtable_bucket__Class;
struct Hashtable_bucket__Boxed {
    struct Hashtable_bucket__Class* klass;
    MonitorData* monitor;
    struct Hashtable_bucket fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Hashtable_bucket__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Hashtable_bucket__Boxed_FWDDECL
#include <Modloader/app/structs/Hashtable_bucket__Class.h>
#endif
#undef IL2CPP_STRUCT_Hashtable_bucket__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_bucket__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable_bucket__Boxed_FWDDECL)
#include <Modloader/app/structs/Hashtable_bucket__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable_bucket__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
