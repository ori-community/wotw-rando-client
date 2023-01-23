#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityRaceTimerDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityRaceTimerDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay_DEFINED)
#include <Modloader/app/structs/UnityRaceTimerDisplay__Fields.h>
#if defined(IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityRaceTimerDisplay_DEFINED
struct UnityRaceTimerDisplay__Class;
struct UnityRaceTimerDisplay {
    struct UnityRaceTimerDisplay__Class* klass;
    MonitorData* monitor;
    struct UnityRaceTimerDisplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay_FWDDECL)
#define IL2CPP_STRUCT_UnityRaceTimerDisplay_FWDDECL
#include <Modloader/app/structs/UnityRaceTimerDisplay__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityRaceTimerDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay_DEFINED) && !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay_FWDDECL)
#include <Modloader/app/structs/UnityRaceTimerDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityRaceTimerDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
