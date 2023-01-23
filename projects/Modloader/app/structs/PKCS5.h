#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS5_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS5_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS5_DEFINED)
#define IL2CPP_STRUCT_PKCS5_DEFINED
struct PKCS5__Class;
struct PKCS5 {
    struct PKCS5__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS5_FWDDECL)
#define IL2CPP_STRUCT_PKCS5_FWDDECL
#include <Modloader/app/structs/PKCS5__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS5_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS5_DEFINED) && !defined(IL2CPP_STRUCT_PKCS5_FWDDECL)
#include <Modloader/app/structs/PKCS5.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS5.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
