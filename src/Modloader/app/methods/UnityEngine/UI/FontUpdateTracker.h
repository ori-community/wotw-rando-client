#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/Text.h>

namespace app::classes::UnityEngine::UI::FontUpdateTracker {
    IL2CPP_REGISTER_METHOD(0x024AD2E0, void, TrackText, app::Text* t)
    IL2CPP_REGISTER_METHOD(0x024AD8B0, void, RebuildForFont, app::Font* f)
    IL2CPP_REGISTER_METHOD(0x024ADA80, void, UntrackText, app::Text* t)
    IL2CPP_REGISTER_METHOD(0x024ADF00, void, cctor, )
} // namespace app::classes::UnityEngine::UI::FontUpdateTracker
