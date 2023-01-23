#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FogMode__Enum.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::UnityEngine::RenderSettings {
    IL2CPP_REGISTER_METHOD(0x02970990, float, get_fogStartDistance, ())
    IL2CPP_REGISTER_METHOD(0x029709E0, float, get_fogEndDistance, ())
    IL2CPP_REGISTER_METHOD(0x02970A30, app::FogMode__Enum, get_fogMode, ())
    IL2CPP_REGISTER_METHOD(0x02970A80, float, get_fogDensity, ())
    IL2CPP_REGISTER_METHOD(0x02970AD0, app::Color, get_ambientLight, ())
    IL2CPP_REGISTER_METHOD(0x02970B40, void, set_ambientLight, (app::Color value))
    IL2CPP_REGISTER_METHOD(0x02970B90, void, get_ambientLight_Injected, (app::Color * ret))
    IL2CPP_REGISTER_METHOD(0x02970BE0, void, set_ambientLight_Injected, (app::Color * value))
} // namespace app::classes::UnityEngine::RenderSettings
