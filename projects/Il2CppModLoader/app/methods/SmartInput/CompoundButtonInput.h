#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SmartInput::CompoundButtonInput {
    IL2CPP_REGISTER_METHOD(0x006CA840, void, ctor_1, (app::CompoundButtonInput * this_ptr, app::IButtonInput__Array * inputs))
    IL2CPP_REGISTER_METHOD(0x00597BD0, void, ctor_2, (app::CompoundButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA8E0, bool, GetValue, (app::CompoundButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA9F0, void, DeclareSources, (app::CompoundButtonInput * this_ptr, app::InputCacheManager * manager))
    IL2CPP_REGISTER_METHOD(0x006CAB40, app::IButtonInput *, GetLastPressed, (app::CompoundButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CABE0, void, Add, (app::CompoundButtonInput * this_ptr, app::IButtonInput * button))
    IL2CPP_REGISTER_METHOD(0x006CADA0, void, Remove, (app::CompoundButtonInput * this_ptr, app::IButtonInput * button))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Clear, (app::CompoundButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CAE40, bool, ContainsKey, (app::CompoundButtonInput * this_ptr, app::KeyCode__Enum code))
}
