#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabIdfa_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabIdfa_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabIdfa_DEFINED)
#define IL2CPP_STRUCT_PlayFabIdfa_DEFINED
struct PlayFabIdfa__Class;
struct PlayFabIdfa {
    struct PlayFabIdfa__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabIdfa_FWDDECL)
#define IL2CPP_STRUCT_PlayFabIdfa_FWDDECL
#include <Modloader/app/structs/PlayFabIdfa__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabIdfa_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabIdfa_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabIdfa_FWDDECL)
#include <Modloader/app/structs/PlayFabIdfa.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabIdfa.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
