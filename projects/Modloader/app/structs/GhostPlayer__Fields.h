#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostPlayer__Fields_DEFINED
struct GameObject;
struct Transform;
struct GameObject__Array;
struct TextBox;
struct RTPC;
struct ParticleSystem__Array;
struct PlayerPuppetAbilities;
struct PlayerPuppetCharacterStates;
struct String;
struct OriGhostRigVisuals;
struct GhostRecorderData;
struct OriGhostRigVisuals_GhostVisualSettings;
struct List_1_IGhostRecorderPlugin_;
struct Dictionary_2_System_Int32_CharacterStatePuppet_;
struct List_1_RecordableObjectPuppet_;
struct GhostRecordingMetaDataPlugin;
struct CharacterAnimationSystem;
struct MoonAnimator;
struct Action;
struct GhostCharacterData;
struct SoundHost;
struct GhostPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* OriRig;
    struct Transform* Puppets;
    struct GameObject__Array* PuppetPrefabs;
    struct GameObject__Array* RecordableObjectPuppetPrefabs;
    struct TextBox* Name;
    struct RTPC* GhostFlagRtpc;
    struct ParticleSystem__Array* ParticleSystems;
    struct GameObject* GhostDisappearEffect;
    int32_t Index;
    struct PlayerPuppetAbilities* PlayerPuppetAbilities;
    struct PlayerPuppetCharacterStates* PlayerPuppetCharacterStates;
    struct String* GhostRecordingFilePath;
    struct String* _GhostReplay_k__BackingField;
    struct Transform* MirrorHolder;
    struct OriGhostRigVisuals* RigVisuals;
    float CurrentTime;
    struct GhostRecorderData* GhostRecorderData;
    struct OriGhostRigVisuals_GhostVisualSettings* VisualSettings;
    bool _IsFinished_k__BackingField;
    bool m_isStarted;
    struct List_1_IGhostRecorderPlugin_* m_plugins;
    struct Dictionary_2_System_Int32_CharacterStatePuppet_* m_puppets;
    struct List_1_RecordableObjectPuppet_* m_recordableObjectPuppets;
    struct GhostRecordingMetaDataPlugin* m_metaDataPlugin;
    struct GameObject* m_oriRig;
    struct CharacterAnimationSystem* m_animation;
    struct MoonAnimator* m_animator;
    struct Action* OnFinished;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct GhostCharacterData* m_ghostCharacterData;
    struct SoundHost* m_soundHost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostPlayer__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_CharacterStatePuppet_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GhostCharacterData.h>
#include <Modloader/app/structs/GhostRecorderData.h>
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin.h>
#include <Modloader/app/structs/List_1_IGhostRecorderPlugin_.h>
#include <Modloader/app/structs/List_1_RecordableObjectPuppet_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/OriGhostRigVisuals.h>
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/PlayerPuppetAbilities.h>
#include <Modloader/app/structs/PlayerPuppetCharacterStates.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GhostPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/GhostPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
