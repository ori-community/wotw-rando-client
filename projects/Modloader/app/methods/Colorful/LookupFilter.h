#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LookupFilter.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::LookupFilter {
    IL2CPP_REGISTER_METHOD(0x03049CF0, void, OnRenderImage, app::LookupFilter* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03049EF0, app::String*, GetShaderName, app::LookupFilter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E930, void, ctor, app::LookupFilter* this_ptr)
} // namespace app::classes::Colorful::LookupFilter
