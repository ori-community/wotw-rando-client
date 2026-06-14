#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoop_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoop_DEFINED)
#define IL2CPP_STRUCT_PlayerLoop_DEFINED
struct PlayerLoop__Class;
struct PlayerLoop {
    struct PlayerLoop__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoop_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoop_FWDDECL
#include <Modloader/app/structs/PlayerLoop__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoop_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoop_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoop_FWDDECL)
#include <Modloader/app/structs/PlayerLoop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
