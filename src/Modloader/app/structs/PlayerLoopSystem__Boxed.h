#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoopSystem__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoopSystem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystem__Boxed_DEFINED)
#include <Modloader/app/structs/PlayerLoopSystem.h>
#if defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_PlayerLoopSystem__Boxed_DEFINED
struct PlayerLoopSystem__Class;
struct PlayerLoopSystem__Boxed {
    struct PlayerLoopSystem__Class* klass;
    MonitorData* monitor;
    struct PlayerLoopSystem fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoopSystem__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoopSystem__Boxed_FWDDECL
#include <Modloader/app/structs/PlayerLoopSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoopSystem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystem__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoopSystem__Boxed_FWDDECL)
#include <Modloader/app/structs/PlayerLoopSystem__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoopSystem__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
