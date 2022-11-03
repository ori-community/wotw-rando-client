#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkOutputSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkOutputSettings * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x018863F0, void*, getCPtr, (app::AkOutputSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkOutputSettings * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01886480, void, Finalize, (app::AkOutputSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01886500, void, Dispose, (app::AkOutputSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01886710, void, ctor_2, (app::AkOutputSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01886830, void, ctor_3, (app::AkOutputSettings * this_ptr, app::String* in_sz_device_share_set, uint32_t in_id_device, app::AkChannelConfig* in_channel_config, app::AkPanningRule__Enum in_e_panning))
    IL2CPP_REGISTER_METHOD(0x01886A60, void, ctor_4, (app::AkOutputSettings * this_ptr, app::String* in_sz_device_share_set, uint32_t in_id_device, app::AkChannelConfig* in_channel_config))
    IL2CPP_REGISTER_METHOD(0x01886C90, void, ctor_5, (app::AkOutputSettings * this_ptr, app::String* in_sz_device_share_set, uint32_t in_id_device))
    IL2CPP_REGISTER_METHOD(0x01886EA0, void, ctor_6, (app::AkOutputSettings * this_ptr, app::String* in_sz_device_share_set))
    IL2CPP_REGISTER_METHOD(0x018870A0, void, set_audioDeviceShareset, (app::AkOutputSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x018871D0, uint32_t, get_audioDeviceShareset, (app::AkOutputSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018872F0, void, set_idDevice, (app::AkOutputSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01887420, uint32_t, get_idDevice, (app::AkOutputSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01887540, void, set_ePanningRule, (app::AkOutputSettings * this_ptr, app::AkPanningRule__Enum value))
    IL2CPP_REGISTER_METHOD(0x01887670, app::AkPanningRule__Enum, get_ePanningRule, (app::AkOutputSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01887790, void, set_channelConfig, (app::AkOutputSettings * this_ptr, app::AkChannelConfig* value))
    IL2CPP_REGISTER_METHOD(0x018878D0, app::AkChannelConfig*, get_channelConfig, (app::AkOutputSettings * this_ptr))
} // namespace app::classes::AkOutputSettings
