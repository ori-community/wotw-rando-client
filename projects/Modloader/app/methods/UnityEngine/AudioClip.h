#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/AudioClipLoadType__Enum.h>
#include <Modloader/app/structs/AudioClip_PCMReaderCallback.h>
#include <Modloader/app/structs/AudioClip_PCMSetPositionCallback.h>
#include <Modloader/app/structs/AudioDataLoadState__Enum.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::AudioClip {
    IL2CPP_REGISTER_METHOD(0x0313DB80, void, ctor, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DC20, float, get_length, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DC70, int32_t, get_samples, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DCC0, int32_t, get_channels, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DD10, int32_t, get_frequency, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DD60, bool, get_isReadyToPlay, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DDB0, app::AudioClipLoadType__Enum, get_loadType, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DE00, bool, LoadAudioData, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DE50, bool, UnloadAudioData, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DEA0, bool, get_preloadAudioData, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DEF0, bool, get_ambisonic, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DF40, app::AudioDataLoadState__Enum, get_loadState, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DF90, bool, get_loadInBackground, app::AudioClip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313DFE0, bool, GetData, app::AudioClip* this_ptr, app::Single__Array* data, int32_t offset_samples)
    IL2CPP_REGISTER_METHOD(0x0313E050, bool, SetData, app::AudioClip* this_ptr, app::Single__Array* data, int32_t offset_samples)
    IL2CPP_REGISTER_METHOD(
        0x0313E0C0,
        app::AudioClip*,
        Create_1,
        app::String* name,
        int32_t length_samples,
        int32_t channels,
        int32_t frequency,
        bool _3_d,
        bool stream
    )
    IL2CPP_REGISTER_METHOD(
        0x0313E0F0,
        app::AudioClip*,
        Create_2,
        app::String* name,
        int32_t length_samples,
        int32_t channels,
        int32_t frequency,
        bool _3_d,
        bool stream,
        app::AudioClip_PCMReaderCallback* pcmreadercallback
    )
    IL2CPP_REGISTER_METHOD(
        0x0313E120,
        app::AudioClip*,
        Create_3,
        app::String* name,
        int32_t length_samples,
        int32_t channels,
        int32_t frequency,
        bool _3_d,
        bool stream,
        app::AudioClip_PCMReaderCallback* pcmreadercallback,
        app::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback
    )
    IL2CPP_REGISTER_METHOD(0x0313E160, app::AudioClip*, Create_4, app::String* name, int32_t length_samples, int32_t channels, int32_t frequency, bool stream)
    IL2CPP_REGISTER_METHOD(
        0x0313E190,
        app::AudioClip*,
        Create_5,
        app::String* name,
        int32_t length_samples,
        int32_t channels,
        int32_t frequency,
        bool stream,
        app::AudioClip_PCMReaderCallback* pcmreadercallback
    )
    IL2CPP_REGISTER_METHOD(
        0x0313E1C0,
        app::AudioClip*,
        Create_6,
        app::String* name,
        int32_t length_samples,
        int32_t channels,
        int32_t frequency,
        bool stream,
        app::AudioClip_PCMReaderCallback* pcmreadercallback,
        app::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback
    )
    IL2CPP_REGISTER_METHOD(0x0313E5A0, void, add_m_PCMReaderCallback, app::AudioClip* this_ptr, app::AudioClip_PCMReaderCallback* value)
    IL2CPP_REGISTER_METHOD(0x0313E690, void, remove_m_PCMReaderCallback, app::AudioClip* this_ptr, app::AudioClip_PCMReaderCallback* value)
    IL2CPP_REGISTER_METHOD(0x0313E780, void, add_m_PCMSetPositionCallback, app::AudioClip* this_ptr, app::AudioClip_PCMSetPositionCallback* value)
    IL2CPP_REGISTER_METHOD(0x0313E870, void, remove_m_PCMSetPositionCallback, app::AudioClip* this_ptr, app::AudioClip_PCMSetPositionCallback* value)
    IL2CPP_REGISTER_METHOD(0x02C79D90, void, InvokePCMReaderCallback_Internal, app::AudioClip* this_ptr, app::Single__Array* data)
    IL2CPP_REGISTER_METHOD(0x0313E960, void, InvokePCMSetPositionCallback_Internal, app::AudioClip* this_ptr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x0313E980, app::AudioClip*, Construct_Internal, )
    IL2CPP_REGISTER_METHOD(
        0x0313E9D0,
        void,
        Init_Internal,
        app::AudioClip* this_ptr,
        app::String* name,
        int32_t length_samples,
        int32_t channels,
        int32_t frequency,
        bool stream
    )
} // namespace app::classes::UnityEngine::AudioClip
