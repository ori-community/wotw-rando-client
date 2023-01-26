#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>

namespace app::classes::Sini::Unity::GUIStyleExtensions {
    IL2CPP_REGISTER_METHOD(0x031155F0, app::GUIStyle*, SetAlignment, (app::GUIStyle * style, app::TextAnchor__Enum alignment))
}
