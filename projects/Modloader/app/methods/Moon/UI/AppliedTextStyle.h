#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppliedTextStyle_1__Boxed.h>
#include <Modloader/app/structs/TextRenderer_1.h>
#include <Modloader/app/structs/TextStyle_1.h>

namespace app::classes::Moon::UI::AppliedTextStyle {
    IL2CPP_REGISTER_METHOD(0x0011DFB0, void, Apply, (app::AppliedTextStyle_1__Boxed * this_ptr, app::TextStyle_1* style, app::TextRenderer_1* renderer))
    IL2CPP_REGISTER_METHOD(0x0011E020, void, ApplyOnTop, (app::AppliedTextStyle_1__Boxed * this_ptr, app::TextStyle_1* style))
} // namespace app::classes::Moon::UI::AppliedTextStyle
