#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSpectateState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSpectateState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSpectateState_DEFINED)
#include <Modloader/app/structs/RaceSpectateState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceSpectateState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceSpectateState_DEFINED
struct RaceSpectateState__Class;
struct RaceSpectateState {
    struct RaceSpectateState__Class* klass;
    MonitorData* monitor;
    struct RaceSpectateState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSpectateState_FWDDECL)
#define IL2CPP_STRUCT_RaceSpectateState_FWDDECL
#include <Modloader/app/structs/RaceSpectateState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceSpectateState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSpectateState_DEFINED) && !defined(IL2CPP_STRUCT_RaceSpectateState_FWDDECL)
#include <Modloader/app/structs/RaceSpectateState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSpectateState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
