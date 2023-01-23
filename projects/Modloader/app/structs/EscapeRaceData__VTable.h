#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EscapeRaceData__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EscapeRaceData__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceData__VTable_DEFINED)
#define IL2CPP_STRUCT_EscapeRaceData__VTable_DEFINED
struct EscapeRaceData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_RaceName;
    VirtualInvokeData get_RequiredScenes;
    VirtualInvokeData get_StartLinePosition;
    VirtualInvokeData get_EndPosition;
    VirtualInvokeData get_FlythroughTimeline;
    VirtualInvokeData get_RaceSettings;
    VirtualInvokeData get_TimeLimit;
    VirtualInvokeData get_GetReadyCondition;
    VirtualInvokeData get_PostFinishCondition;
    VirtualInvokeData get_IsBeaten;
    VirtualInvokeData get_ShouldPlayEndingAnimation;
    VirtualInvokeData get_StateOverride;
    VirtualInvokeData get_DisabledAbilities;
    VirtualInvokeData get_RaceSyncables;
};
#endif
#if !defined(IL2CPP_STRUCT_EscapeRaceData__VTable_FWDDECL)
#define IL2CPP_STRUCT_EscapeRaceData__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_EscapeRaceData__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceData__VTable_DEFINED) && !defined(IL2CPP_STRUCT_EscapeRaceData__VTable_FWDDECL)
#include <Modloader/app/structs/EscapeRaceData__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EscapeRaceData__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
