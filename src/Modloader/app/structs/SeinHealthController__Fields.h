#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHealthController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHealthController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHealthController__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinHealthController__Fields_DEFINED
struct PlayerUberStateDescriptor;
struct GameObject;
struct SeinCharacter;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct SeinHealthController__Fields {
    struct GuidOwner__Fields _;
    struct PlayerUberStateDescriptor* PlayerUberState;
    bool m_amountDirty;
    float m_amountCached;
    bool m_maxHealthDirty;
    float m_maxHealthCached;
    bool m_actualMaxHealthDirty;
    float m_actualMaxHealthCached;
    float m_overMaxHealthBoost;
    bool m_baseMaxHealthDirty;
    int32_t m_baseMaxHealthCached;
    float HealthPercentAfterRespawn;
    float VisualMinAmount;
    float VisualMaxAmount;
    int32_t BaseMaxHealthCap;
    float m_visualFillSpeedMin;
    float m_visualFillSpeedMax;
    float m_visualFillSpeedExtra;
    float m_maxHealthBonus;
    struct GameObject* RespawnEffect;
    bool m_lastResortThresholdDirty;
    float m_lastResortThresholdCached;
    bool m_hasLastResortCached;
    struct SeinCharacter* m_sein;
    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHealthController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinHealthController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinHealthController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHealthController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinHealthController__Fields_FWDDECL)
#include <Modloader/app/structs/SeinHealthController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHealthController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
