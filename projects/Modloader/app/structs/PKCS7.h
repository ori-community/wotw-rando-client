#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS7_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS7_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_DEFINED)
#define IL2CPP_STRUCT_PKCS7_DEFINED
struct PKCS7__Class;
struct PKCS7 {
    struct PKCS7__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS7_FWDDECL)
#define IL2CPP_STRUCT_PKCS7_FWDDECL
#include <Modloader/app/structs/PKCS7__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS7_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_DEFINED) && !defined(IL2CPP_STRUCT_PKCS7_FWDDECL)
#include <Modloader/app/structs/PKCS7.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS7.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
