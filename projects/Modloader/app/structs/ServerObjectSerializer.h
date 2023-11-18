#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectSerializer_DEFINED)
#define IL2CPP_STRUCT_ServerObjectSerializer_DEFINED
struct ServerObjectSerializer__Class;
struct ServerObjectSerializer {
    struct ServerObjectSerializer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectSerializer_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectSerializer_FWDDECL
#include <Modloader/app/structs/ServerObjectSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectSerializer_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectSerializer_FWDDECL)
#include <Modloader/app/structs/ServerObjectSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
