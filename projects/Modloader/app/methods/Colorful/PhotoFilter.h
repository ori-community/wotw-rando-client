#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PhotoFilter.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::PhotoFilter {
    IL2CPP_REGISTER_METHOD(0x0304C3F0, void, OnRenderImage, (app::PhotoFilter * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0304C5E0, app::String*, GetShaderName, (app::PhotoFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C660, void, ctor, (app::PhotoFilter * this_ptr))
} // namespace app::classes::Colorful::PhotoFilter
