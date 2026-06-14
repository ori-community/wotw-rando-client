#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Stores_Names_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Stores_Names_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Stores_Names_DEFINED)
#define IL2CPP_STRUCT_X509Stores_Names_DEFINED
struct X509Stores_Names__Class;
struct X509Stores_Names {
    struct X509Stores_Names__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Stores_Names_FWDDECL)
#define IL2CPP_STRUCT_X509Stores_Names_FWDDECL
#include <Modloader/app/structs/X509Stores_Names__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Stores_Names_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Stores_Names_DEFINED) && !defined(IL2CPP_STRUCT_X509Stores_Names_FWDDECL)
#include <Modloader/app/structs/X509Stores_Names.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Stores_Names.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
