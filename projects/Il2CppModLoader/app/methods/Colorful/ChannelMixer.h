#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::ChannelMixer {
    IL2CPP_REGISTER_METHOD(0x030402B0, void, OnRenderImage, (app::ChannelMixer * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x030406C0, app::String *, GetShaderName, (app::ChannelMixer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03040740, void, ctor, (app::ChannelMixer * this_ptr))
}
