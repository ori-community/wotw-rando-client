#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioFormat.h>
#include <Modloader/app/structs/AkChannelConfig.h>

namespace app::classes::AkAudioFormat {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkAudioFormat* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026C5310, void*, getCPtr, app::AkAudioFormat* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkAudioFormat* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026C53A0, void, Finalize, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C5420, void, Dispose, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C5630, void, set_uSampleRate, app::AkAudioFormat* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026C5760, uint32_t, get_uSampleRate, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C5880, void, set_channelConfig, app::AkAudioFormat* this_ptr, app::AkChannelConfig* value)
    IL2CPP_REGISTER_METHOD(0x026C59C0, app::AkChannelConfig*, get_channelConfig, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C5BD0, void, set_uBitsPerSample, app::AkAudioFormat* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026C5D00, uint32_t, get_uBitsPerSample, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C5E20, void, set_uBlockAlign, app::AkAudioFormat* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026C5F50, uint32_t, get_uBlockAlign, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6070, void, set_uTypeID, app::AkAudioFormat* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026C61A0, uint32_t, get_uTypeID, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C62C0, void, set_uInterleaveID, app::AkAudioFormat* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026C63F0, uint32_t, get_uInterleaveID, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6510, uint32_t, GetNumChannels, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6630, uint32_t, GetBitsPerSample, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6750, uint32_t, GetBlockAlign, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6870, uint32_t, GetTypeID, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6990, uint32_t, GetInterleaveID, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026C6AB0,
        void,
        SetAll,
        app::AkAudioFormat* this_ptr,
        uint32_t in_u_sample_rate,
        app::AkChannelConfig* in_channel_config,
        uint32_t in_u_bits_per_sample,
        uint32_t in_u_block_align,
        uint32_t in_u_type_i_d,
        uint32_t in_u_interleave_i_d
    )
    IL2CPP_REGISTER_METHOD(0x026C6C20, bool, IsChannelConfigSupported, app::AkAudioFormat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C6D50, void, ctor_2, app::AkAudioFormat* this_ptr)
} // namespace app::classes::AkAudioFormat
