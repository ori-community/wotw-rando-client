#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceIdleState_DEFINED)
#include <Modloader/app/structs/RaceIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceIdleState_DEFINED
struct RaceIdleState__Class;
struct RaceIdleState {
    struct RaceIdleState__Class* klass;
    MonitorData* monitor;
    struct RaceIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceIdleState_FWDDECL)
#define IL2CPP_STRUCT_RaceIdleState_FWDDECL
#include <Modloader/app/structs/RaceIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceIdleState_DEFINED) && !defined(IL2CPP_STRUCT_RaceIdleState_FWDDECL)
#include <Modloader/app/structs/RaceIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
