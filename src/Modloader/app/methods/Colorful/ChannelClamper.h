#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChannelClamper.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::ChannelClamper {
    IL2CPP_REGISTER_METHOD(0x0303FEE0, void, OnRenderImage, app::ChannelClamper* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03040200, app::String*, GetShaderName, app::ChannelClamper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03040280, void, ctor, app::ChannelClamper* this_ptr)
} // namespace app::classes::Colorful::ChannelClamper
