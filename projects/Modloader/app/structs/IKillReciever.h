#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKillReciever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKillReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKillReciever_DEFINED)
#define IL2CPP_STRUCT_IKillReciever_DEFINED
struct IKillReciever__Class;
struct IKillReciever {
    struct IKillReciever__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IKillReciever_FWDDECL)
#define IL2CPP_STRUCT_IKillReciever_FWDDECL
#include <Modloader/app/structs/IKillReciever__Class.h>
#endif
#undef IL2CPP_STRUCT_IKillReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKillReciever_DEFINED) && !defined(IL2CPP_STRUCT_IKillReciever_FWDDECL)
#include <Modloader/app/structs/IKillReciever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKillReciever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
