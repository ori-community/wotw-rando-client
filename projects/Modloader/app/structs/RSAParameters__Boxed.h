#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAParameters__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAParameters__Boxed_DEFINED)
#include <Modloader/app/structs/RSAParameters.h>
#if defined(IL2CPP_STRUCT_RSAParameters_DEFINED)
#define IL2CPP_STRUCT_RSAParameters__Boxed_DEFINED
struct RSAParameters__Class;
struct RSAParameters__Boxed {
    struct RSAParameters__Class* klass;
    MonitorData* monitor;
    struct RSAParameters fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAParameters__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RSAParameters__Boxed_FWDDECL
#include <Modloader/app/structs/RSAParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_RSAParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAParameters__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RSAParameters__Boxed_FWDDECL)
#include <Modloader/app/structs/RSAParameters__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAParameters__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
