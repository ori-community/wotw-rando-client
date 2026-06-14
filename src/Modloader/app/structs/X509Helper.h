#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Helper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Helper_DEFINED)
#define IL2CPP_STRUCT_X509Helper_DEFINED
struct X509Helper__Class;
struct X509Helper {
    struct X509Helper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Helper_FWDDECL)
#define IL2CPP_STRUCT_X509Helper_FWDDECL
#include <Modloader/app/structs/X509Helper__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Helper_DEFINED) && !defined(IL2CPP_STRUCT_X509Helper_FWDDECL)
#include <Modloader/app/structs/X509Helper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Helper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
