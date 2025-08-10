#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::ShadowsMidtonesHighlights {
    IL2CPP_REGISTER_METHOD(
        0x030523E0,
        void,
        OnRenderImage,
        app::ShadowsMidtonesHighlights* this_ptr,
        app::RenderTexture* source,
        app::RenderTexture* destination
    )
    IL2CPP_REGISTER_METHOD(0x030528B0, app::String*, GetShaderName, app::ShadowsMidtonesHighlights* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03052930, void, ctor, app::ShadowsMidtonesHighlights* this_ptr)
} // namespace app::classes::Colorful::ShadowsMidtonesHighlights
