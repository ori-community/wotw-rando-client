#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Water3UnderwaterEffect {
    IL2CPP_REGISTER_METHOD(0x02D77540, void, Start, (app::Water3UnderwaterEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D77720, void, OnRenderImage, (app::Water3UnderwaterEffect * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x02D77B90, void, ctor, (app::Water3UnderwaterEffect * this_ptr))
}
