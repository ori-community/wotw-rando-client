#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterInteraction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterInteraction__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterInteraction__Fields_DEFINED
struct GameObject;
struct RTPC;
struct Action;
struct List_1_WaterZone_;
struct WaterInteraction__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* WaterSplashEffect;
    struct RTPC* UnderwaterRTPC;
    struct Action* OnWaterZoneEnterAction;
    struct Action* OnWaterZoneExitAction;
    struct List_1_WaterZone_* m_crossedWaterZone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterInteraction__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterInteraction__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_WaterZone_.h>
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_WaterInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterInteraction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterInteraction__Fields_FWDDECL)
#include <Modloader/app/structs/WaterInteraction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterInteraction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
