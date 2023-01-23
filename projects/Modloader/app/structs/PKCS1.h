#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS1_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS1_DEFINED)
#define IL2CPP_STRUCT_PKCS1_DEFINED
struct PKCS1__Class;
struct PKCS1 {
    struct PKCS1__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS1_FWDDECL)
#define IL2CPP_STRUCT_PKCS1_FWDDECL
#include <Modloader/app/structs/PKCS1__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS1_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS1_DEFINED) && !defined(IL2CPP_STRUCT_PKCS1_FWDDECL)
#include <Modloader/app/structs/PKCS1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
