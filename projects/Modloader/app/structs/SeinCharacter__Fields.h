#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCharacter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCharacter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCharacter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SeinCharacter__Fields_DEFINED
struct SeinLogicCycle;
struct SeinAbilities;
struct SeinComboMoves;
struct SeinSpells;
struct SeinController;
struct SeinCutsceneBlocked;
struct SeinCutsceneMovement;
struct SeinDoorHandler;
struct SeinSoulFlame;
struct SeinInventory;
struct SeinEnvironmentForceController;
struct SeinInput;
struct SeinLevel;
struct SeinEnergy;
struct SeinMortality;
struct SeinPickupProcessor;
struct PlatformBehaviour;
struct PlayerAbilities;
struct PlayerSpiritShards;
struct SpellInventory;
struct PlayerQuestItems;
struct CharacterFovController;
struct SeinPrefabFactory;
struct GameObject;
struct SpiritLightRadialVisualAffector;
struct SoundHost;
struct DamageOwner;
struct Action;
struct DynamicDataResolver;
struct SeinCharacter__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinLogicCycle* LogicCycle;
    struct SeinAbilities* Abilities;
    struct SeinComboMoves* ComboMoves;
    struct SeinSpells* Spells;
    struct SeinController* Controller;
    struct SeinCutsceneBlocked* CutsceneBlocked;
    struct SeinCutsceneMovement* CutsceneMovement;
    struct SeinDoorHandler* DoorHandler;
    struct SeinSoulFlame* SoulFlame;
    struct SeinInventory* Inventory;
    struct SeinEnvironmentForceController* ForceController;
    struct SeinInput* Input;
    struct SeinLevel* Level;
    struct SeinEnergy* Energy;
    struct SeinMortality* Mortality;
    struct SeinPickupProcessor* PickupHandler;
    struct PlatformBehaviour* PlatformBehaviour;
    struct PlayerAbilities* PlayerAbilities;
    struct PlayerSpiritShards* PlayerSpiritShards;
    struct SpellInventory* PlayerSpells;
    struct PlayerQuestItems* QuestItems;
    struct CharacterFovController* FovController;
    struct SeinPrefabFactory* Prefabs;
    struct GameObject* OriRig;
    struct GameObject* OriRigInstance;
    bool EnablePerspectiveAdjustment;
    struct SpiritLightRadialVisualAffector* _LightAffector_k__BackingField;
    NavigationType__Enum _CurrentAreaType_k__BackingField;

    struct SoundHost* m_soundHost;
    struct Nullable_1_UnityEngine_Vector3_ LastCheckpointedPosition;
    struct Rect m_bounds;
    struct DamageOwner* _DamageOwner_k__BackingField;
    struct Action* OnResetAirLimits;
    bool m_isSphere;
    int32_t m_leachCount;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCharacter__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinCharacter__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CharacterFovController.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/PlayerAbilities.h>
#include <Modloader/app/structs/PlayerQuestItems.h>
#include <Modloader/app/structs/PlayerSpiritShards.h>
#include <Modloader/app/structs/SeinAbilities.h>
#include <Modloader/app/structs/SeinComboMoves.h>
#include <Modloader/app/structs/SeinController.h>
#include <Modloader/app/structs/SeinCutsceneBlocked.h>
#include <Modloader/app/structs/SeinCutsceneMovement.h>
#include <Modloader/app/structs/SeinDoorHandler.h>
#include <Modloader/app/structs/SeinEnergy.h>
#include <Modloader/app/structs/SeinEnvironmentForceController.h>
#include <Modloader/app/structs/SeinInput.h>
#include <Modloader/app/structs/SeinInventory.h>
#include <Modloader/app/structs/SeinLevel.h>
#include <Modloader/app/structs/SeinLogicCycle.h>
#include <Modloader/app/structs/SeinMortality.h>
#include <Modloader/app/structs/SeinPickupProcessor.h>
#include <Modloader/app/structs/SeinPrefabFactory.h>
#include <Modloader/app/structs/SeinSoulFlame.h>
#include <Modloader/app/structs/SeinSpells.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SpellInventory.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector.h>
#endif
#undef IL2CPP_STRUCT_SeinCharacter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCharacter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinCharacter__Fields_FWDDECL)
#include <Modloader/app/structs/SeinCharacter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCharacter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
