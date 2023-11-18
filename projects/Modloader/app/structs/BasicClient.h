#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BasicClient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BasicClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasicClient_DEFINED)
#define IL2CPP_STRUCT_BasicClient_DEFINED
struct BasicClient__Class;
struct BasicClient {
    struct BasicClient__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BasicClient_FWDDECL)
#define IL2CPP_STRUCT_BasicClient_FWDDECL
#include <Modloader/app/structs/BasicClient__Class.h>
#endif
#undef IL2CPP_STRUCT_BasicClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasicClient_DEFINED) && !defined(IL2CPP_STRUCT_BasicClient_FWDDECL)
#include <Modloader/app/structs/BasicClient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BasicClient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
