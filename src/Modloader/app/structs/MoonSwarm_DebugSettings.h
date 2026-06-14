#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonSwarm_DebugSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonSwarm_DebugSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarm_DebugSettings_DEFINED)
#define IL2CPP_STRUCT_MoonSwarm_DebugSettings_DEFINED
struct MoonSwarm_DebugSettings {
    bool DebugShowVectorAlignment;
    bool DebugShowVectorSeparation;
    bool DebugShowVectorCohesion;
    bool DebugShowVectorAvoidance;
    bool DebugShowVectorGlobalPOI;
    bool DebugShowVectorWander;
    bool DebugShowRaysAvoidance;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonSwarm_DebugSettings_FWDDECL)
#define IL2CPP_STRUCT_MoonSwarm_DebugSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonSwarm_DebugSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarm_DebugSettings_DEFINED) && !defined(IL2CPP_STRUCT_MoonSwarm_DebugSettings_FWDDECL)
#include <Modloader/app/structs/MoonSwarm_DebugSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonSwarm_DebugSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
