#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoFiPalette.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::Colorful::LoFiPalette {
    IL2CPP_REGISTER_METHOD(0x03049300, void, OnRenderImage, (app::LoFiPalette * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x030494C0, void, RenderLut2D, (app::LoFiPalette * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03049910, void, RenderLut3D, (app::LoFiPalette * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03049CD0, void, ctor, (app::LoFiPalette * this_ptr))
} // namespace app::classes::Colorful::LoFiPalette
