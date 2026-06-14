#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRespawnReciever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRespawnReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRespawnReciever_DEFINED)
#define IL2CPP_STRUCT_IRespawnReciever_DEFINED
struct IRespawnReciever__Class;
struct IRespawnReciever {
    struct IRespawnReciever__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRespawnReciever_FWDDECL)
#define IL2CPP_STRUCT_IRespawnReciever_FWDDECL
#include <Modloader/app/structs/IRespawnReciever__Class.h>
#endif
#undef IL2CPP_STRUCT_IRespawnReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRespawnReciever_DEFINED) && !defined(IL2CPP_STRUCT_IRespawnReciever_FWDDECL)
#include <Modloader/app/structs/IRespawnReciever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRespawnReciever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
