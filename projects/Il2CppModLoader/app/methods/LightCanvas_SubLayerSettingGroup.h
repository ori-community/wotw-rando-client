#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LightCanvas_SubLayerSettingGroup {
    IL2CPP_REGISTER_METHOD(0x01145B20, bool, Equals_1, (app::LightCanvas_SubLayerSettingGroup * this_ptr, app::LightCanvas_SubLayerSettingGroup * other))
    IL2CPP_REGISTER_METHOD(0x01145BC0, bool, Equals_2, (app::LightCanvas_SubLayerSettingGroup * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01145D40, int32_t, GetHashCode, (app::LightCanvas_SubLayerSettingGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LightCanvas_SubLayerSettingGroup * this_ptr))
}
