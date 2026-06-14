#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingIdleState_DEFINED)
#include <Modloader/app/structs/RammingIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingIdleState_DEFINED
struct RammingIdleState__Class;
struct RammingIdleState {
    struct RammingIdleState__Class* klass;
    MonitorData* monitor;
    struct RammingIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingIdleState_FWDDECL)
#define IL2CPP_STRUCT_RammingIdleState_FWDDECL
#include <Modloader/app/structs/RammingIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingIdleState_DEFINED) && !defined(IL2CPP_STRUCT_RammingIdleState_FWDDECL)
#include <Modloader/app/structs/RammingIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
