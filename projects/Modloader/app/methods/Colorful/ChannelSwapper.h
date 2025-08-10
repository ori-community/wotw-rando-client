#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChannelSwapper.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::ChannelSwapper {
    IL2CPP_REGISTER_METHOD(0x030407D0, void, OnRenderImage, app::ChannelSwapper* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03040BF0, app::String*, GetShaderName, app::ChannelSwapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03040C70, void, ctor, app::ChannelSwapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03040C90, void, cctor, )
} // namespace app::classes::Colorful::ChannelSwapper
