#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS9_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS9_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS9_DEFINED)
#define IL2CPP_STRUCT_PKCS9_DEFINED
struct PKCS9__Class;
struct PKCS9 {
    struct PKCS9__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS9_FWDDECL)
#define IL2CPP_STRUCT_PKCS9_FWDDECL
#include <Modloader/app/structs/PKCS9__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS9_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS9_DEFINED) && !defined(IL2CPP_STRUCT_PKCS9_FWDDECL)
#include <Modloader/app/structs/PKCS9.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS9.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
