#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LightInfluenceSettings {
    IL2CPP_REGISTER_METHOD(0x0114D1F0, int32_t, get_LayerCount, ())
    IL2CPP_REGISTER_METHOD(0x0114D360, app::Dictionary_2_LightPriority_Layer_LightInfluence_*, get_InfluenceMap, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114D390, void, ctor, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114D4F0, void, BuildMap, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114DC60, void, BuildMapWithEarlyExit, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114DD60, void, ApplyInfluence, (app::LightInfluenceSettings * this_ptr, app::PointLightMaskModifier* point_light))
    IL2CPP_REGISTER_METHOD(0x0114DE40, app::LightInfluence*, GetInfluenceForLayer, (app::LightInfluenceSettings * this_ptr, app::LightPriority_Layer__Enum layer))
    IL2CPP_REGISTER_METHOD(0x0114DEF0, void, OnBeforeSerialize, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114DF00, void, Lerp, (app::LightInfluenceSettings * from, app::LightInfluenceSettings* to, app::LightInfluenceSettings** destination, float t))
    IL2CPP_REGISTER_METHOD(0x0114E1B0, void, CopyTo, (app::LightInfluenceSettings * this_ptr, app::LightInfluenceSettings** destination))
    IL2CPP_REGISTER_METHOD(0x0114E310, app::LightInfluenceSettings*, Clone, (app::LightInfluenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114E470, void, cctor, ())
} // namespace app::classes::LightInfluenceSettings
