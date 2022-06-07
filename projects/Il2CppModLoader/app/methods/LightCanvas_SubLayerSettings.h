#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LightCanvas_SubLayerSettings {
    IL2CPP_REGISTER_METHOD(0x01145DA0, app::LightCanvas_SubLayerSettings *, get_ClipBoard, ())
    IL2CPP_REGISTER_METHOD(0x01145E20, void, set_ClipBoard, (app::LightCanvas_SubLayerSettings * value))
    IL2CPP_REGISTER_METHOD(0x01145FB0, bool, get_HasClipBoardValue, ())
    IL2CPP_REGISTER_METHOD(0x01146030, void, CopyFrom, (app::LightCanvas_SubLayerSettings * this_ptr, app::LightCanvas_SubLayerSettings * other_sublayer_settings))
    IL2CPP_REGISTER_METHOD(0x01146410, bool, Equals_1, (app::LightCanvas_SubLayerSettings * this_ptr, app::LightCanvas_SubLayerSettings * other))
    IL2CPP_REGISTER_METHOD(0x011464E0, bool, Equals_2, (app::LightCanvas_SubLayerSettings * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01146670, int32_t, GetHashCode, (app::LightCanvas_SubLayerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01146710, void, ctor, (app::LightCanvas_SubLayerSettings * this_ptr))
}
