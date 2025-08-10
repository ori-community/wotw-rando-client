#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageBasedSoundProvider.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/GhostGenericResourceAttribute.h>
#include <Modloader/app/structs/GhostGenericSoundPlayer.h>
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/IGenericResourceEnumerator.h>
#include <Modloader/app/structs/IPuppetBase.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Nullable_1_Moon_MoonAnimatorLayerName_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_Event__Enum.h>
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GenericPuppet {
    IL2CPP_REGISTER_METHOD(0x00E07DD0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsLive, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E07E90, void, OnInitializeLive, app::GenericPuppet* this_ptr, app::IPuppetBase* puppet_master)
    IL2CPP_REGISTER_METHOD(0x00E08200, void, OnInitializeGhost, app::GenericPuppet* this_ptr, app::IPuppetBase* puppet_master)
    IL2CPP_REGISTER_METHOD(0x00E082A0, void, OnInitializeGhostRecorder, app::GenericPuppet* this_ptr, app::GhostRecorder* recorder)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFinishedRecording, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFinishedPlayback, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E08350, void, OnGameFixedUpdateLate, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPerform, app::GenericPuppet* this_ptr, int32_t event_id, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x00E084A0, void, RecordEvent, app::GenericPuppet* this_ptr, int32_t event_id, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x00E08510, void, PerformEventById, app::GenericPuppet* this_ptr, int32_t event_id, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x00E08530, bool, MatchFieldByValue, app::GenericPuppet* this_ptr, app::FieldInfo_1* fi, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00E085B0, bool, MatchFieldByResourceId, app::GenericPuppet* this_ptr, app::FieldInfo_1* fi, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E086F0, bool, MatchGhostGenericSoundPlayer, app::GenericPuppet* this_ptr, app::FieldInfo_1* fi, int32_t id)
    IL2CPP_REGISTER_METHOD(
        0x00E08840,
        app::GhostGenericResourceAttribute*,
        GetGhostGenericResourceAttributeForFieldWithValue,
        app::GenericPuppet* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x00E08B20, void, PlaySound_1, app::GenericPuppet* this_ptr, app::SoundProvider* sound, app::SoundHost* sound_host)
    IL2CPP_REGISTER_METHOD(
        0x00E08D20,
        void,
        PlaySound_2,
        app::GenericPuppet* this_ptr,
        app::SoundDescriptor* sound_descriptor,
        app::Vector3 position,
        app::Action* nullify,
        app::SoundHost* sound_host
    )
    IL2CPP_REGISTER_METHOD(
        0x00E08E00,
        void,
        PlaySoundForMaterial,
        app::GenericPuppet* this_ptr,
        app::SurfaceToSoundProviderMap* provider,
        app::SurfaceMaterialType__Enum material,
        app::SoundHost* sound_host,
        float volume
    )
    IL2CPP_REGISTER_METHOD(
        0x00E08EE0,
        void,
        PlaySoundForDamage,
        app::GenericPuppet* this_ptr,
        app::DamageBasedSoundProvider* provider,
        app::Damage* damage,
        app::SoundHost* sound_host,
        float volume
    )
    IL2CPP_REGISTER_METHOD(
        0x00E08F10,
        void,
        PlaySoundGeneric,
        app::GenericPuppet* this_ptr,
        app::IGenericResourceEnumerator* provider,
        app::Object* context,
        app::SoundHost* sound_host,
        bool attach,
        float volume
    )
    IL2CPP_REGISTER_METHOD(0x00E09160, void, PlaySound_3, app::GenericPuppet* this_ptr, app::GhostGenericSoundPlayer* player, app::SoundProvider* sound)
    IL2CPP_REGISTER_METHOD(0x00E09310, void, PlaySound_4, app::GenericPuppet* this_ptr, app::Event_1* sound, app::SoundHost* host)
    IL2CPP_REGISTER_METHOD(0x00E094A0, void, FadeOutSound, app::GenericPuppet* this_ptr, app::GhostGenericSoundPlayer* player, float time)
    IL2CPP_REGISTER_METHOD(
        0x00E09520,
        void,
        RecordSoundEvent,
        app::GenericPuppet* this_ptr,
        app::Object* sound_field,
        int32_t array_index,
        int32_t player_id,
        bool attach,
        float volume
    )
    IL2CPP_REGISTER_METHOD(
        0x00E09800,
        void,
        PlaySoundById,
        app::GenericPuppet* this_ptr,
        int32_t resource_id,
        int32_t array_index,
        int32_t player_id,
        bool attach,
        float volume
    )
    IL2CPP_REGISTER_METHOD(
        0x00E09B70,
        app::SoundPlayer*,
        PlaySoundHelper,
        app::GenericPuppet* this_ptr,
        app::SoundDescriptor* sound,
        bool attach,
        float volume,
        app::SoundHost* host
    )
    IL2CPP_REGISTER_METHOD(0x00E09D60, void, FadeOutSoundById, app::GenericPuppet* this_ptr, int32_t player_id, float time, bool should_destroy_on_fade_out)
    IL2CPP_REGISTER_METHOD(
        0x00E09F00,
        app::Object_1*,
        Instantiate,
        app::GenericPuppet* this_ptr,
        app::GameObject* prefab,
        app::Vector3 position,
        app::Quaternion rotation,
        bool record
    )
    IL2CPP_REGISTER_METHOD(
        0x00E0A260,
        void,
        InstantiateById,
        app::GenericPuppet* this_ptr,
        int32_t resource_id,
        app::Vector3 position,
        app::Quaternion rotation
    )
    IL2CPP_REGISTER_METHOD(0x00E0A530, void, RecordTransform, app::GenericPuppet* this_ptr, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x00E0A7F0, void, RecordLocalTransform, app::GenericPuppet* this_ptr, app::Transform* t)
    IL2CPP_REGISTER_METHOD(
        0x00E0AAB0,
        void,
        SetLocalTransformById,
        app::GenericPuppet* this_ptr,
        int32_t resource_id,
        app::Vector3 position,
        app::Quaternion rotation,
        app::Vector3 scale
    )
    IL2CPP_REGISTER_METHOD(
        0x00E0ADA0,
        void,
        SetTransformById,
        app::GenericPuppet* this_ptr,
        int32_t resource_id,
        app::Vector3 position,
        app::Quaternion rotation,
        app::Vector3 scale,
        bool active_self
    )
    IL2CPP_REGISTER_METHOD(
        0x00E0B120,
        int32_t,
        PlayAnimationRandom,
        app::GenericPuppet* this_ptr,
        app::MoonAnimation__Array* animations,
        int32_t priority,
        app::Func_1_Boolean_* condition,
        app::Action* on_start,
        app::Action* on_stop
    )
    IL2CPP_REGISTER_METHOD(
        0x00E0B270,
        app::ActiveAnimationHandle,
        PlayAnimationIndexed,
        app::GenericPuppet* this_ptr,
        app::MoonAnimation__Array* animations,
        int32_t index,
        int32_t priority,
        app::Func_1_Boolean_* condition,
        app::Action* on_start,
        app::Action* on_stop
    )
    IL2CPP_REGISTER_METHOD(0x00E0B710, void, TimelinePlay_1, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0B8B0, void, TimelineStop_1, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0BA50, void, TimelinePlay_2, app::GenericPuppet* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00E0BCC0, void, TimelineStop_2, app::GenericPuppet* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(
        0x00E0BF20,
        void,
        HandleTimelineStartDetection,
        app::GenericPuppet* this_ptr,
        app::MoonTimeline* timeline,
        app::GhostGenericResourceAttribute* attribute
    )
    IL2CPP_REGISTER_METHOD(0x00E0C150, void, HandleTimelineEndDetection, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0C280, void, HandleTimelineEnd, app::GenericPuppet* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(
        0x00E0C460,
        app::ActiveAnimationHandle,
        PlayAnimation,
        app::GenericPuppet* this_ptr,
        app::MoonAnimation* animation,
        int32_t priority,
        app::Func_1_Boolean_* condition,
        app::Action* on_start,
        app::Action* on_stop,
        bool force_play_from_start,
        float speed,
        app::Nullable_1_Moon_MoonAnimatorLayerName_ layer_name
    )
    IL2CPP_REGISTER_METHOD(0x00E0CC70, app::ActiveAnimationHandle, GetActiveAnimation, app::GenericPuppet* this_ptr, app::MoonAnimation* animation)
    IL2CPP_REGISTER_METHOD(
        0x00E0CDC0,
        void,
        HandleAnimationStartDetection,
        app::GenericPuppet* this_ptr,
        app::ActiveAnimationHandle animation,
        int32_t index,
        app::GhostGenericResourceAttribute* attribute,
        int32_t priority,
        float speed
    )
    IL2CPP_REGISTER_METHOD(0x00E0D130, void, HandleAnimationEndDetection, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0D440, void, AddActiveAnimation, app::GenericPuppet* this_ptr, app::ActiveAnimationHandle animation, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00E0D5B0, void, RemoveActiveAnimation, app::GenericPuppet* this_ptr, app::ActiveAnimationHandle animation)
    IL2CPP_REGISTER_METHOD(
        0x00E0D6D0,
        void,
        CacheActiveAnimation,
        app::GenericPuppet* this_ptr,
        app::MoonAnimation* animation,
        app::ActiveAnimationHandle animation_state
    )
    IL2CPP_REGISTER_METHOD(
        0x00E0D810,
        void,
        RecordAnimationStart,
        app::GenericPuppet* this_ptr,
        int32_t resource_id,
        int32_t array_index,
        int32_t priority,
        float speed
    )
    IL2CPP_REGISTER_METHOD(0x00E0D860, void, RecordAnimationEnd, app::GenericPuppet* this_ptr, int32_t resource_id, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x00E0D9F0, void, SetParameterValue, app::GenericPuppet* this_ptr, app::FloatAnimationParameter* parameter, float value)
    IL2CPP_REGISTER_METHOD(0x00E0DAC0, void, StartAnimationById, app::GenericPuppet* this_ptr, int32_t resource_id, int32_t array_index, int32_t priority)
    IL2CPP_REGISTER_METHOD(0x00E0DDA0, app::MoonAnimation*, GetAnimationFromID, app::GenericPuppet* this_ptr, int32_t resource_id, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x00E0DFA0, void, EndAnimationById, app::GenericPuppet* this_ptr, int32_t resource_id, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x00E0E220, void, SetParameterValueById, app::GenericPuppet* this_ptr, int32_t resource_id, float value)
    IL2CPP_REGISTER_METHOD(0x00E0E3C0, app::FloatAnimationParameter*, GetAnimationParameterValueById, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0E530, app::MoonTimeline*, GetMoonTimelineById, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0E6A0, app::ParticleSystem*, GetParticleSystemById, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0E800, app::Transform*, GetTransformById, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0E970, void, PlayAnimationMontageById, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0EB10, void, ResetLocalState, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0EEA0, void, ResetLocalStateAll, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0EEA0, void, OnPoolSpawned, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0EEC0, void, OnPoolDespawned, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0F080, void, OnDestroy, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E0F240, app::FieldInfo_1__Array*, get_Fields, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::ISoundHost*, get_SoundHost, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_SoundHost, app::GenericPuppet* this_ptr, app::ISoundHost* value)
    IL2CPP_REGISTER_METHOD(0x00E0F290, app::Object__Array*, FieldInfoAttributes, app::GenericPuppet* this_ptr, app::FieldInfo_1* fi)
    IL2CPP_REGISTER_METHOD(0x00E0F420, app::FieldInfo_1*, FieldFromResourceID, app::GenericPuppet* this_ptr, int32_t resource_id)
    IL2CPP_REGISTER_METHOD(0x00E0F710, app::FieldInfo_1*, FieldByValue, app::GenericPuppet* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x00E0F810, app::FieldInfo_1*, FieldFromPlayerID, app::GenericPuppet* this_ptr, int32_t player_id)
    IL2CPP_REGISTER_METHOD(0x00E0FA00, void, ctor, app::GenericPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E10280, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01548570, void, Perform_1, app::GenericPuppet* this_ptr, app::SeinBashAttackPuppet_Event__Enum e, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x01548570, void, Perform_2, app::GenericPuppet* this_ptr, app::Int32Enum__Enum e, app::Object__Array* parameters)
} // namespace app::classes::GenericPuppet
