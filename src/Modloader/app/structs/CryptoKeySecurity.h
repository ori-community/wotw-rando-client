#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoKeySecurity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoKeySecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoKeySecurity_DEFINED)
#define IL2CPP_STRUCT_CryptoKeySecurity_DEFINED
struct CryptoKeySecurity__Class;
struct CryptoKeySecurity {
    struct CryptoKeySecurity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CryptoKeySecurity_FWDDECL)
#define IL2CPP_STRUCT_CryptoKeySecurity_FWDDECL
#include <Modloader/app/structs/CryptoKeySecurity__Class.h>
#endif
#undef IL2CPP_STRUCT_CryptoKeySecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoKeySecurity_DEFINED) && !defined(IL2CPP_STRUCT_CryptoKeySecurity_FWDDECL)
#include <Modloader/app/structs/CryptoKeySecurity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoKeySecurity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
