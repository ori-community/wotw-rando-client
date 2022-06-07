#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MultiplyLayerModifierManager {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::MultiplyLayerModifierManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087CFD0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0087D0B0, void, Awake, (app::MultiplyLayerModifierManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087D1C0, void, OnDestroy, (app::MultiplyLayerModifierManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087D2A0, void, OnUpdate, (app::MultiplyLayerModifierManager * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x0087D3F0, void, Register, (app::MultiplyLayerModifier * multiply_layer_modifier))
    IL2CPP_REGISTER_METHOD(0x0087D4B0, void, Unregister, (app::MultiplyLayerModifier * multiply_layer_modifier))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MultiplyLayerModifierManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087D570, void, cctor, ())
}
