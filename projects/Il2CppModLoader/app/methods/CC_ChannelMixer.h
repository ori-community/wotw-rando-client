#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CC_ChannelMixer {
    IL2CPP_REGISTER_METHOD(0x03192D10, void, OnRenderImage, (app::CC_ChannelMixer * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03193120, void, ctor, (app::CC_ChannelMixer * this_ptr))
}
