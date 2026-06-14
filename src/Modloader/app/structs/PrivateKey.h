#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrivateKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrivateKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrivateKey_DEFINED)
#include <Modloader/app/structs/PrivateKey__Fields.h>
#if defined(IL2CPP_STRUCT_PrivateKey__Fields_DEFINED)
#define IL2CPP_STRUCT_PrivateKey_DEFINED
struct PrivateKey__Class;
struct PrivateKey {
    struct PrivateKey__Class* klass;
    MonitorData* monitor;
    struct PrivateKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrivateKey_FWDDECL)
#define IL2CPP_STRUCT_PrivateKey_FWDDECL
#include <Modloader/app/structs/PrivateKey__Class.h>
#endif
#undef IL2CPP_STRUCT_PrivateKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrivateKey_DEFINED) && !defined(IL2CPP_STRUCT_PrivateKey_FWDDECL)
#include <Modloader/app/structs/PrivateKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrivateKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
