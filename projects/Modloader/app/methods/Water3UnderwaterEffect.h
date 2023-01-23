#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Water3UnderwaterEffect.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::Water3UnderwaterEffect {
    IL2CPP_REGISTER_METHOD(0x02D77540, void, Start, (app::Water3UnderwaterEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D77720, void, OnRenderImage, (app::Water3UnderwaterEffect * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D77B90, void, ctor, (app::Water3UnderwaterEffect * this_ptr))
} // namespace app::classes::Water3UnderwaterEffect
