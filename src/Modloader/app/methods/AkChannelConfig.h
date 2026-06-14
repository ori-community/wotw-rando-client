#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkChannelConfig.h>

namespace app::classes::AkChannelConfig {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkChannelConfig* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026D5DC0, void*, getCPtr, app::AkChannelConfig* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkChannelConfig* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026D5E50, void, Finalize, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D5ED0, void, Dispose, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D60E0, void, set_uNumChannels, app::AkChannelConfig* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026D6210, uint32_t, get_uNumChannels, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D6330, void, set_eConfigType, app::AkChannelConfig* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026D6460, uint32_t, get_eConfigType, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D6580, void, set_uChannelMask, app::AkChannelConfig* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026D66B0, uint32_t, get_uChannelMask, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D67D0, void, ctor_2, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D68F0, void, ctor_3, app::AkChannelConfig* this_ptr, uint32_t in_u_num_channels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x026D6A30, void, Clear, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D6B50, void, SetStandard, app::AkChannelConfig* this_ptr, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x026D6C80, void, SetStandardOrAnonymous, app::AkChannelConfig* this_ptr, uint32_t in_u_num_channels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x026D6DC0, void, SetAnonymous, app::AkChannelConfig* this_ptr, uint32_t in_u_num_channels)
    IL2CPP_REGISTER_METHOD(0x026D6EF0, void, SetAmbisonic, app::AkChannelConfig* this_ptr, uint32_t in_u_num_channels)
    IL2CPP_REGISTER_METHOD(0x026D7020, bool, IsValid, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D7150, uint32_t, Serialize, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D7270, void, Deserialize, app::AkChannelConfig* this_ptr, uint32_t in_u_channel_config)
    IL2CPP_REGISTER_METHOD(0x026D73A0, app::AkChannelConfig*, RemoveLFE, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D75A0, app::AkChannelConfig*, RemoveCenter, app::AkChannelConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026D77A0, bool, IsChannelConfigSupported, app::AkChannelConfig* this_ptr)
} // namespace app::classes::AkChannelConfig
