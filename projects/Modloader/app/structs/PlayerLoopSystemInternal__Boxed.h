#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_DEFINED)
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>
#if defined(IL2CPP_STRUCT_PlayerLoopSystemInternal_DEFINED)
#define IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_DEFINED
struct PlayerLoopSystemInternal__Class;
struct PlayerLoopSystemInternal__Boxed {
    struct PlayerLoopSystemInternal__Class* klass;
    MonitorData* monitor;
    struct PlayerLoopSystemInternal fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_FWDDECL
#include <Modloader/app/structs/PlayerLoopSystemInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal__Boxed_FWDDECL)
#include <Modloader/app/structs/PlayerLoopSystemInternal__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoopSystemInternal__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
