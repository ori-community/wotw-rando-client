#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundSize.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SoundPlayer {
    IL2CPP_REGISTER_METHOD(0x00EEB3A0, app::SoundHost*, get_SoundHost, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736690, void, set_Position, app::SoundPlayer* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00EEB4E0, void, Awake, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEB610, void, Register, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEB710, void, OnPoolSpawned, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEB810, void, Start, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEB850, void, OnDestroy, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEB850, void, RemoveRegisters, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetSoundSize, app::SoundPlayer* this_ptr, app::SoundSize* sound_size)
    IL2CPP_REGISTER_METHOD(0x00EEB940, void, WWisePostEvent, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EEBC30,
        void,
        Play_1,
        app::SoundPlayer* this_ptr,
        app::AudioClip* clip,
        app::Vector3 position,
        float volume,
        bool loop,
        bool keep_in_sync,
        app::MixerGroupType__Enum mixer_group
    )
    IL2CPP_REGISTER_METHOD(0x00EEBD60, void, Play_2, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEBD70, void, Pause, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEBE10, void, Stop, app::SoundPlayer* this_ptr, float time, app::AkCurveInterpolation__Enum fade_type)
    IL2CPP_REGISTER_METHOD(0x00EEBEA0, bool, IsPlaying, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EEBEC0,
        void,
        FadeOut,
        app::SoundPlayer* this_ptr,
        float time,
        bool should_destroy_on_fade_out,
        app::AkCurveInterpolation__Enum fade_type
    )
    IL2CPP_REGISTER_METHOD(0x00EEBD60, void, FadeIn, app::SoundPlayer* this_ptr, float time, bool reset)
    IL2CPP_REGISTER_METHOD(0x00EEBED0, bool, SoundShouldFreeze, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC000, bool, get_AllSoundsCanPlay, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC0D0, void, Update, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC230, bool, DestroyIfNeeded, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC270, bool, get_IsSuspended, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC280, void, set_IsSuspended, app::SoundPlayer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mask, app::SoundPlayer* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00EEC2D0, void, DestroySound, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC3C0, void, DestroyAll, )
    IL2CPP_REGISTER_METHOD(0x0058EE40, void, ctor, app::SoundPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEC590, void, cctor, )
} // namespace app::classes::SoundPlayer
