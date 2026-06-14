#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppliedTextStyle__Boxed.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/TextRenderer.h>
#include <Modloader/app/structs/TextStyle.h>

namespace app::classes::CatlikeCoding::TextBox::AppliedTextStyle {
    IL2CPP_REGISTER_METHOD(0x0011DFB0, void, Apply, app::AppliedTextStyle__Boxed* this_ptr, app::TextStyle* style, app::TextRenderer* renderer)
    IL2CPP_REGISTER_METHOD(0x00123DD0, void, ApplyOnTop, app::AppliedTextStyle__Boxed* this_ptr, app::TextStyle* style, app::Color base_color)
} // namespace app::classes::CatlikeCoding::TextBox::AppliedTextStyle
