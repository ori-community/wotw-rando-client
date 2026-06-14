#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormHidingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormHidingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHidingState_DEFINED)
#include <Modloader/app/structs/WormHidingState__Fields.h>
#if defined(IL2CPP_STRUCT_WormHidingState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormHidingState_DEFINED
struct WormHidingState__Class;
struct WormHidingState {
    struct WormHidingState__Class* klass;
    MonitorData* monitor;
    struct WormHidingState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormHidingState_FWDDECL)
#define IL2CPP_STRUCT_WormHidingState_FWDDECL
#include <Modloader/app/structs/WormHidingState__Class.h>
#endif
#undef IL2CPP_STRUCT_WormHidingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHidingState_DEFINED) && !defined(IL2CPP_STRUCT_WormHidingState_FWDDECL)
#include <Modloader/app/structs/WormHidingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormHidingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
