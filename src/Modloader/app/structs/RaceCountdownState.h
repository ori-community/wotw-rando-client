#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceCountdownState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceCountdownState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceCountdownState_DEFINED)
#include <Modloader/app/structs/RaceCountdownState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceCountdownState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceCountdownState_DEFINED
struct RaceCountdownState__Class;
struct RaceCountdownState {
    struct RaceCountdownState__Class* klass;
    MonitorData* monitor;
    struct RaceCountdownState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceCountdownState_FWDDECL)
#define IL2CPP_STRUCT_RaceCountdownState_FWDDECL
#include <Modloader/app/structs/RaceCountdownState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceCountdownState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceCountdownState_DEFINED) && !defined(IL2CPP_STRUCT_RaceCountdownState_FWDDECL)
#include <Modloader/app/structs/RaceCountdownState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceCountdownState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
