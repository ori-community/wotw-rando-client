#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Sini::Unity::ColorExtensions {
    IL2CPP_REGISTER_METHOD(0x031144D0, app::Color, WithAlpha, (app::Color color, float alpha))
    IL2CPP_REGISTER_METHOD(0x03114500, app::Color, Darkest, (app::Color color))
    IL2CPP_REGISTER_METHOD(0x03114540, app::Color, EvenDarker, (app::Color color))
    IL2CPP_REGISTER_METHOD(0x03114580, app::Color, Darker_1, (app::Color color))
    IL2CPP_REGISTER_METHOD(0x031145E0, app::Color, Darker_2, (app::Color color, float factor))
    IL2CPP_REGISTER_METHOD(0x03114620, app::Color, Brighter_1, (app::Color color))
    IL2CPP_REGISTER_METHOD(0x031146A0, app::Color, Brighter_2, (app::Color color, float factor))
    IL2CPP_REGISTER_METHOD(0x03114730, app::Color, Brightest, (app::Color color))
    IL2CPP_REGISTER_METHOD(0x031147D0, app::Color, Desaturate, (app::Color color, float desaturation_amount, float darkening_amount))
} // namespace app::classes::Sini::Unity::ColorExtensions
