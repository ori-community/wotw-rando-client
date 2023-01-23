#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoConfig_DEFINED)
#define IL2CPP_STRUCT_CryptoConfig_DEFINED
struct CryptoConfig__Class;
struct CryptoConfig {
    struct CryptoConfig__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CryptoConfig_FWDDECL)
#define IL2CPP_STRUCT_CryptoConfig_FWDDECL
#include <Modloader/app/structs/CryptoConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_CryptoConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoConfig_DEFINED) && !defined(IL2CPP_STRUCT_CryptoConfig_FWDDECL)
#include <Modloader/app/structs/CryptoConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
