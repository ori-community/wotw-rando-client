#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS8_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS8_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_DEFINED)
#define IL2CPP_STRUCT_PKCS8_DEFINED
struct PKCS8__Class;
struct PKCS8 {
    struct PKCS8__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS8_FWDDECL)
#define IL2CPP_STRUCT_PKCS8_FWDDECL
#include <Modloader/app/structs/PKCS8__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS8_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_DEFINED) && !defined(IL2CPP_STRUCT_PKCS8_FWDDECL)
#include <Modloader/app/structs/PKCS8.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS8.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
