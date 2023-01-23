#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextGenerationSettings__Boxed.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/TextGenerationSettings.h>

namespace app::classes::UnityEngine::TextGenerationSettings {
    IL2CPP_REGISTER_METHOD(0x0024B230, bool, CompareColors, (app::TextGenerationSettings__Boxed * this_ptr, app::Color left, app::Color right))
    IL2CPP_REGISTER_METHOD(0x0024B260, bool, CompareVector2, (app::TextGenerationSettings__Boxed * this_ptr, app::Vector2 left, app::Vector2 right))
    IL2CPP_REGISTER_METHOD(0x0024B270, bool, Equals, (app::TextGenerationSettings__Boxed * this_ptr, app::TextGenerationSettings other))
} // namespace app::classes::UnityEngine::TextGenerationSettings
