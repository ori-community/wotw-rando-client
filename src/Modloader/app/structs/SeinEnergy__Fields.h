#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEnergy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEnergy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnergy__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEnergy__Fields_DEFINED
struct SoundProvider;
struct SeinCharacter;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct SeinEnergy__Fields {
    struct GuidOwner__Fields _;
    float MinEnergyPercentAfterRespawn;
    float MinVisual;
    float MaxVisual;
    float BaseMaxEnergyCap;
    bool m_energyDirty;
    float m_energyCached;
    float m_maxEnergyCached;
    bool m_maxEnergyDirty;
    float m_actualMaxEnergyCached;
    bool m_actualMaxEnergyDirty;
    bool m_baseMaxEnergyDirty;
    float m_baseMaxEnergyCached;
    bool m_energyCostMultiplierDirty;
    float m_energyCostMultiplierCached;
    float m_maxEnergyBonus;
    struct SoundProvider* OutOfEnergySound;
    struct SeinCharacter* m_sein;
    bool m_bloodPactHPCostDirty;
    float m_bloodPactHPCostCached;
    bool m_bloodPactEquippedCached;
    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEnergy__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEnergy__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinEnergy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnergy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEnergy__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEnergy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEnergy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
