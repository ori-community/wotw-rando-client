#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::AppliedTextStyle {
    IL2CPP_REGISTER_METHOD(0x0011DFB0, void, Apply, (app::AppliedTextStyle_1__Boxed * this_ptr, app::TextStyle_1 * style, app::TextRenderer_1 * renderer))
    IL2CPP_REGISTER_METHOD(0x0011E020, void, ApplyOnTop, (app::AppliedTextStyle_1__Boxed * this_ptr, app::TextStyle_1 * style))
}
