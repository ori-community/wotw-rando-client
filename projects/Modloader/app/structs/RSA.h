#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSA_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSA_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSA_DEFINED)
#include <Modloader/app/structs/RSA__Fields.h>
#if defined(IL2CPP_STRUCT_RSA__Fields_DEFINED)
#define IL2CPP_STRUCT_RSA_DEFINED
struct RSA__Class;
struct RSA {
    struct RSA__Class* klass;
    MonitorData* monitor;
    struct RSA__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSA_FWDDECL)
#define IL2CPP_STRUCT_RSA_FWDDECL
#include <Modloader/app/structs/RSA__Class.h>
#endif
#undef IL2CPP_STRUCT_RSA_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSA_DEFINED) && !defined(IL2CPP_STRUCT_RSA_FWDDECL)
#include <Modloader/app/structs/RSA.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSA.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
