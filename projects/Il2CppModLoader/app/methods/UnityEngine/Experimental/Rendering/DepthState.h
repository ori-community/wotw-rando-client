#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::DepthState {
    IL2CPP_REGISTER_METHOD(0x001EC730, void, ctor, (app::DepthState__Boxed * this_ptr, bool write_enabled, app::CompareFunction__Enum compare_function))
    IL2CPP_REGISTER_METHOD(0x024339C0, app::DepthState, get_Default, ())
}
