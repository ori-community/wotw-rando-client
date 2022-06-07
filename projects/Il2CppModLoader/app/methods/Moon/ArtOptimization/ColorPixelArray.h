#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ColorPixelArray {
    IL2CPP_REGISTER_METHOD(0x0134A020, void, ctor_1, (app::ColorPixelArray * this_ptr, int32_t width, int32_t height))
    IL2CPP_REGISTER_METHOD(0x0134A0C0, void, ctor_2, (app::ColorPixelArray * this_ptr, app::Texture2D * texture))
    IL2CPP_REGISTER_METHOD(0x0134A160, void, CreatePixels, (app::ColorPixelArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134A1F0, void, ApplyToTexture, (app::ColorPixelArray * this_ptr, app::Texture2D * texture))
    IL2CPP_REGISTER_METHOD(0x0134A260, app::Color, SamplePixelLinear, (app::ColorPixelArray * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0134A400, app::Color, SamplePixelLinearUnsafe, (app::ColorPixelArray * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0134A7B0, app::Color, GetPixelLinear, (app::ColorPixelArray * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x0134A8E0, app::Color, GetPixelLinearUnsafe, (app::ColorPixelArray * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x0134AE40, app::Color32, GetPixel, (app::ColorPixelArray * this_ptr, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x0134AF50, app::Color32, GetPixelUnsafe, (app::ColorPixelArray * this_ptr, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x0134AF90, void, SetPixelUnsafe, (app::ColorPixelArray * this_ptr, int32_t x, int32_t y, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0134AF90, void, SetPixel, (app::ColorPixelArray * this_ptr, int32_t x, int32_t y, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0134B010, void, RotateTexture, (app::Texture2D * tex))
    IL2CPP_REGISTER_METHOD(0x0134B460, app::Color32, Multiply, (app::Color32 color, float multiplier))
    IL2CPP_REGISTER_METHOD(0x0134B500, app::Color32, Add, (app::Color32 c1, app::Color32 c2))
    IL2CPP_REGISTER_METHOD(0x0134B5E0, app::Color32, Divide, (app::Color32 color, float divider))
}
