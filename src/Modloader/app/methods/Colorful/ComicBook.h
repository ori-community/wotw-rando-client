#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComicBook.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::ComicBook {
    IL2CPP_REGISTER_METHOD(0x03041040, void, OnRenderImage, app::ComicBook* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03041660, app::String*, GetShaderName, app::ComicBook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030416E0, void, ctor, app::ComicBook* this_ptr)
} // namespace app::classes::Colorful::ComicBook
