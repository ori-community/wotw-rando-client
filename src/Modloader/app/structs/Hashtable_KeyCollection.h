#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable_KeyCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable_KeyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_KeyCollection_DEFINED)
#include <Modloader/app/structs/Hashtable_KeyCollection__Fields.h>
#if defined(IL2CPP_STRUCT_Hashtable_KeyCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_Hashtable_KeyCollection_DEFINED
struct Hashtable_KeyCollection__Class;
struct Hashtable_KeyCollection {
    struct Hashtable_KeyCollection__Class* klass;
    MonitorData* monitor;
    struct Hashtable_KeyCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Hashtable_KeyCollection_FWDDECL)
#define IL2CPP_STRUCT_Hashtable_KeyCollection_FWDDECL
#include <Modloader/app/structs/Hashtable_KeyCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_Hashtable_KeyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_KeyCollection_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable_KeyCollection_FWDDECL)
#include <Modloader/app/structs/Hashtable_KeyCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable_KeyCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
