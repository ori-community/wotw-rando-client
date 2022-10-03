#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SmartInput::CompoundAxisInput {
    IL2CPP_REGISTER_METHOD(0x006CA3B0, void, ctor_1, (app::CompoundAxisInput * this_ptr, app::IAxisInput__Array* inputs))
    IL2CPP_REGISTER_METHOD(0x00597BC0, void, ctor_2, (app::CompoundAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA3E0, float, GetValue, (app::CompoundAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA5F0, void, DeclareSources, (app::CompoundAxisInput * this_ptr, app::InputCacheManager* manager))
    IL2CPP_REGISTER_METHOD(0x006CA670, app::IAxisInput*, GetLastPressed, (app::CompoundAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA6B0, void, Add, (app::CompoundAxisInput * this_ptr, app::IAxisInput* axis))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Clear, (app::CompoundAxisInput * this_ptr))
} // namespace app::classes::SmartInput::CompoundAxisInput
