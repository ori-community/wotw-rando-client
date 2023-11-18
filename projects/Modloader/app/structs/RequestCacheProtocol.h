#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCacheProtocol_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCacheProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheProtocol_DEFINED)
#define IL2CPP_STRUCT_RequestCacheProtocol_DEFINED
struct RequestCacheProtocol__Class;
struct RequestCacheProtocol {
    struct RequestCacheProtocol__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCacheProtocol_FWDDECL)
#define IL2CPP_STRUCT_RequestCacheProtocol_FWDDECL
#include <Modloader/app/structs/RequestCacheProtocol__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCacheProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheProtocol_DEFINED) && !defined(IL2CPP_STRUCT_RequestCacheProtocol_FWDDECL)
#include <Modloader/app/structs/RequestCacheProtocol.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCacheProtocol.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
