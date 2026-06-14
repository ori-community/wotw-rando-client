#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable_SyncHashtable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable_SyncHashtable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_SyncHashtable_DEFINED)
#include <Modloader/app/structs/Hashtable_SyncHashtable__Fields.h>
#if defined(IL2CPP_STRUCT_Hashtable_SyncHashtable__Fields_DEFINED)
#define IL2CPP_STRUCT_Hashtable_SyncHashtable_DEFINED
struct Hashtable_SyncHashtable__Class;
struct Hashtable_SyncHashtable {
    struct Hashtable_SyncHashtable__Class* klass;
    MonitorData* monitor;
    struct Hashtable_SyncHashtable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Hashtable_SyncHashtable_FWDDECL)
#define IL2CPP_STRUCT_Hashtable_SyncHashtable_FWDDECL
#include <Modloader/app/structs/Hashtable_SyncHashtable__Class.h>
#endif
#undef IL2CPP_STRUCT_Hashtable_SyncHashtable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_SyncHashtable_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable_SyncHashtable_FWDDECL)
#include <Modloader/app/structs/Hashtable_SyncHashtable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable_SyncHashtable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
