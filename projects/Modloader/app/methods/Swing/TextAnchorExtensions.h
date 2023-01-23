#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>

namespace app::classes::Swing::TextAnchorExtensions {
    IL2CPP_REGISTER_METHOD(0x0182F9C0, app::Vector2, toNormalizedVector, (app::TextAnchor__Enum _anchor))
    IL2CPP_REGISTER_METHODINFO(0x047618A8, TextAnchorExtensions_toNormalizedVector__MethodInfo)
} // namespace app::classes::Swing::TextAnchorExtensions
