#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::UnityEngine::ColorUtility {
    IL2CPP_REGISTER_METHOD(0x02428C70, bool, DoTryParseHtmlColor, (app::String * html_string, app::Color32* color))
    IL2CPP_REGISTER_METHOD(0x02428CD0, bool, TryParseHtmlString, (app::String * html_string, app::Color* color))
} // namespace app::classes::UnityEngine::ColorUtility
