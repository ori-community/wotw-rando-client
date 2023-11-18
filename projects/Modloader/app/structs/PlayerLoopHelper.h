#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoopHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoopHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopHelper_DEFINED)
#define IL2CPP_STRUCT_PlayerLoopHelper_DEFINED
struct PlayerLoopHelper__Class;
struct PlayerLoopHelper {
    struct PlayerLoopHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoopHelper_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoopHelper_FWDDECL
#include <Modloader/app/structs/PlayerLoopHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoopHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopHelper_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoopHelper_FWDDECL)
#include <Modloader/app/structs/PlayerLoopHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoopHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
