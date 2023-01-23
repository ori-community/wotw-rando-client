#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_LizardEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_LizardEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_DEFINED
struct List_1_DamageType_;
struct List_1_DamageWeight_;
struct HashSet_1_DamageType_;
struct HashSet_1_DamageWeight_;
struct CharacterPlatformMovement;
struct HitReactionSettings;
struct EntityHitReactionBehaviour_1_LizardEntity___Fields {
    struct EntityReactionBehaviour_1_LizardEntity___Fields _;
    struct List_1_DamageType_* DamageTypePreventingInterruption;
    struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
    struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
    struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
    bool _HasLocomotion_k__BackingField;
    struct CharacterPlatformMovement* m_platformMovement;
    EntityWeightData_EntityWeight__Enum m_weight;

    struct HitReactionSettings* m_kickbackSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/HashSet_1_DamageType_.h>
#include <Modloader/app/structs/HashSet_1_DamageWeight_.h>
#include <Modloader/app/structs/HitReactionSettings.h>
#include <Modloader/app/structs/List_1_DamageType_.h>
#include <Modloader/app/structs/List_1_DamageWeight_.h>
#endif
#undef IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_FWDDECL)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_LizardEntity___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_LizardEntity___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
