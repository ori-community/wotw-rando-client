#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStopState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStopState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStopState_DEFINED)
#include <Modloader/app/structs/RaceStopState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceStopState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStopState_DEFINED
struct RaceStopState__Class;
struct RaceStopState {
    struct RaceStopState__Class* klass;
    MonitorData* monitor;
    struct RaceStopState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStopState_FWDDECL)
#define IL2CPP_STRUCT_RaceStopState_FWDDECL
#include <Modloader/app/structs/RaceStopState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceStopState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStopState_DEFINED) && !defined(IL2CPP_STRUCT_RaceStopState_FWDDECL)
#include <Modloader/app/structs/RaceStopState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStopState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
