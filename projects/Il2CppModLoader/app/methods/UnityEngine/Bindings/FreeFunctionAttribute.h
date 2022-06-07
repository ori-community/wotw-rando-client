#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Bindings::FreeFunctionAttribute {
    IL2CPP_REGISTER_METHOD(0x031BB1C0, void, ctor_1, (app::FreeFunctionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BB1D0, void, ctor_2, (app::FreeFunctionAttribute * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x031BB1F0, void, ctor_3, (app::FreeFunctionAttribute * this_ptr, app::String * name, bool is_thread_safe))
}
