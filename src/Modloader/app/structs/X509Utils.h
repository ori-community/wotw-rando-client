#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Utils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Utils_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Utils_DEFINED)
#define IL2CPP_STRUCT_X509Utils_DEFINED
struct X509Utils__Class;
struct X509Utils {
    struct X509Utils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Utils_FWDDECL)
#define IL2CPP_STRUCT_X509Utils_FWDDECL
#include <Modloader/app/structs/X509Utils__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Utils_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Utils_DEFINED) && !defined(IL2CPP_STRUCT_X509Utils_FWDDECL)
#include <Modloader/app/structs/X509Utils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Utils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
