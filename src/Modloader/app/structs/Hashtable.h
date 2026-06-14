#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_DEFINED)
#include <Modloader/app/structs/Hashtable__Fields.h>
#if defined(IL2CPP_STRUCT_Hashtable__Fields_DEFINED)
#define IL2CPP_STRUCT_Hashtable_DEFINED
struct Hashtable__Class;
struct Hashtable {
    struct Hashtable__Class* klass;
    MonitorData* monitor;
    struct Hashtable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Hashtable_FWDDECL)
#define IL2CPP_STRUCT_Hashtable_FWDDECL
#include <Modloader/app/structs/Hashtable__Class.h>
#endif
#undef IL2CPP_STRUCT_Hashtable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable_FWDDECL)
#include <Modloader/app/structs/Hashtable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
