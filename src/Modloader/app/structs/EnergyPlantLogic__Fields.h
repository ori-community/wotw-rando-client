#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyPlantLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyPlantLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantLogic__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_EnergyPlantLogic__Fields_DEFINED
struct DynamicDataResolver;
struct EnergyPlantAnimator;
struct Vitals;
struct OrbSpawner__Array;
struct EnergyPlantLogic__Fields {
    struct MonoBehaviour__Fields _;
    float RespawnTime;
    float m_timer;
    bool RespawnOnScreen;
    struct DynamicDataResolver* m_dataResolver;
    struct EnergyPlantAnimator* Animator;
    struct Vitals* m_vitals;
    struct Bounds m_bounds;
    bool m_insideFrustum;
    bool m_hasFrustumDisablingParent;
    struct OrbSpawner__Array* m_orbSpawners;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyPlantLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnergyPlantLogic__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EnergyPlantAnimator.h>
#include <Modloader/app/structs/OrbSpawner__Array.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_EnergyPlantLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnergyPlantLogic__Fields_FWDDECL)
#include <Modloader/app/structs/EnergyPlantLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyPlantLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
