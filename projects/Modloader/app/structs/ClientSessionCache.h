#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSessionCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSessionCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionCache_DEFINED)
#define IL2CPP_STRUCT_ClientSessionCache_DEFINED
struct ClientSessionCache__Class;
struct ClientSessionCache {
    struct ClientSessionCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ClientSessionCache_FWDDECL)
#define IL2CPP_STRUCT_ClientSessionCache_FWDDECL
#include <Modloader/app/structs/ClientSessionCache__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientSessionCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionCache_DEFINED) && !defined(IL2CPP_STRUCT_ClientSessionCache_FWDDECL)
#include <Modloader/app/structs/ClientSessionCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSessionCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
