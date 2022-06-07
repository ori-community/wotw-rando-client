#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CartSparkEffect {
    IL2CPP_REGISTER_METHOD(0x00B3EA00, void, Start, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3EBC0, void, ActivateTrails, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3ED00, void, DeactivateTrails, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3ED90, void, Update, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3F420, void, TurnOn, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3F5C0, void, TurnOff, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3F700, bool, ForceSparks, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3F710, void, OnDisable, (app::CartSparkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3F7E0, void, ctor, (app::CartSparkEffect * this_ptr))
}
