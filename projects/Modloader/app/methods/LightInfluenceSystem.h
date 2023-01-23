#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightInfluenceSettings.h>
#include <Modloader/app/structs/LightInfluenceSystem.h>

namespace app::classes::LightInfluenceSystem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0114E4F0, void, ApplyToLights, (app::LightInfluenceSettings * m_settings_to_apply))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LightInfluenceSystem * this_ptr))
} // namespace app::classes::LightInfluenceSystem
