#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkChannelConfig.h>
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration.h>

namespace app::classes::AkCommonOutputSettings_ChannelConfiguration {
    IL2CPP_REGISTER_METHOD(0x026DA0E0, void, CopyTo, app::AkCommonOutputSettings_ChannelConfiguration* this_ptr, app::AkChannelConfig* config)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AkCommonOutputSettings_ChannelConfiguration* this_ptr)
} // namespace app::classes::AkCommonOutputSettings_ChannelConfiguration
