#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IGenericResourceEnumerator.h>
#include <Modloader/app/structs/LowPassFilterSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSize.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Core::Sound {
    IL2CPP_REGISTER_METHOD(0x00DAEE90, app::GameObject*, GetAudioObjectsParent, )
    IL2CPP_REGISTER_METHOD(0x00DAEF40, void, LoadAudioParent, )
    IL2CPP_REGISTER_METHOD(0x00DAF2D0, bool, IsWWiseInitialised, )
    IL2CPP_REGISTER_METHOD(0x00DAF360, app::SoundPlayer*, PlayLooping_1, app::SoundDescriptor* sound_descriptor, app::Vector3 position, app::Action* nullify)
    IL2CPP_REGISTER_METHOD(
        0x00DAF4B0,
        app::SoundPlayer*,
        PlayLooping_2,
        app::SoundDescriptor* sound_descriptor,
        app::Vector3 position,
        float fade_in_duration,
        app::Action* nullify
    )
    IL2CPP_REGISTER_METHOD(
        0x00DAF610,
        app::SoundPlayer*,
        PlayLooping_3,
        app::AudioClip* audio_clip,
        app::Vector3 position,
        float volume,
        app::SoundSize* sound_size,
        bool should_be_panned,
        float pitch,
        app::LowPassFilterSettings* low_pass_filter_settings,
        app::SoundDescriptor* sound_descriptor,
        app::Action* nullify,
        float fade_in
    )
    IL2CPP_REGISTER_METHOD(0x00DAFB70, app::SoundPlayer*, Play_1, app::SoundProvider* sound_provider)
    IL2CPP_REGISTER_METHOD(
        0x00DAFDC0,
        app::SoundPlayer*,
        Play_2,
        app::SoundDescriptor* sound_descriptor,
        app::Vector3 position,
        app::Action* nullify,
        app::SoundHost* sound_host
    )
    IL2CPP_REGISTER_METHOD(0x00DB0090, app::ArtificialSoundHostReference, Play_3, app::SoundDescriptor* sound_descriptor, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x00DB0200,
        app::SoundPlayer*,
        Play_4,
        app::AudioClip* audio_clip,
        app::Vector3 position,
        app::Action* nullify,
        float volume,
        app::SoundDescriptor* sound_descriptor
    )
    IL2CPP_REGISTER_METHOD(
        0x00DB0470,
        app::SoundPlayer*,
        PlayGeneric,
        app::IGenericResourceEnumerator* provider,
        app::Object* context,
        app::SoundHost* sound_host,
        app::Vector3 position,
        bool attach,
        float volume
    )
    IL2CPP_REGISTER_METHOD(
        0x00DB0630,
        app::SoundPlayer*,
        GetPooledPlayer,
        app::AudioClip* clip,
        app::Vector3 pos,
        app::Quaternion rotation,
        app::Action* nullify
    )
    IL2CPP_REGISTER_METHOD(
        0x00DB0AD0,
        app::SoundPlayer*,
        Play_5,
        app::AudioClip* audio_clip,
        app::Vector3 position,
        float volume,
        app::SoundSize* sound_size,
        bool should_be_panned,
        float pitch,
        app::LowPassFilterSettings* low_pass_filter_settings,
        app::SoundDescriptor* sound_descriptor,
        app::Action* nullify
    )
    IL2CPP_REGISTER_METHOD(0x00DB0DC0, app::Vector3, get_SoundListenerPosition, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Core::Sound
