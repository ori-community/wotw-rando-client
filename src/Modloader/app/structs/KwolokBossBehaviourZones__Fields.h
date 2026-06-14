#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_DEFINED
struct CageStructureTool;
struct List_1_KwolokBossBehaviourZones_ZoneAndState_;
struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_;
struct KwolokBossBehaviourZones__Fields {
    struct MonoBehaviour__Fields _;
    struct CageStructureTool* LeftZone;
    struct CageStructureTool* CenterZone;
    struct CageStructureTool* RightZone;
    struct CageStructureTool* TopLeftZone;
    struct CageStructureTool* TopRightZone;
    struct CageStructureTool* WaterZone;
    struct CageStructureTool* WaterSurfaceZone;
    struct CageStructureTool* WaterDeepZone;
    struct CageStructureTool* BottomSpikeZone;
    struct List_1_KwolokBossBehaviourZones_ZoneAndState_* ZoneStateOfTargetL;
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_* ZoneStateOfTargetD;
    struct List_1_KwolokBossBehaviourZones_ZoneAndState_* ZoneStateOfKwolokL;
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_* ZoneStateOfKwolokD;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_.h>
#include <Modloader/app/structs/List_1_KwolokBossBehaviourZones_ZoneAndState_.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossBehaviourZones__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossBehaviourZones__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossBehaviourZones__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
