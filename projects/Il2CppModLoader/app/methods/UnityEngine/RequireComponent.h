#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::RequireComponent {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, (app::RequireComponent * this_ptr, app::Type * required_component))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::RequireComponent * this_ptr, app::Type * required_component, app::Type * required_component2))
}
