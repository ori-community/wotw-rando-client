#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormIdleState_DEFINED)
#include <Modloader/app/structs/WormIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_WormIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormIdleState_DEFINED
struct WormIdleState__Class;
struct WormIdleState {
    struct WormIdleState__Class* klass;
    MonitorData* monitor;
    struct WormIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormIdleState_FWDDECL)
#define IL2CPP_STRUCT_WormIdleState_FWDDECL
#include <Modloader/app/structs/WormIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_WormIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormIdleState_DEFINED) && !defined(IL2CPP_STRUCT_WormIdleState_FWDDECL)
#include <Modloader/app/structs/WormIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
