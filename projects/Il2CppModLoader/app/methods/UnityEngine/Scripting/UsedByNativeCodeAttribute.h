#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Scripting::UsedByNativeCodeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::UsedByNativeCodeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::UsedByNativeCodeAttribute * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::UsedByNativeCodeAttribute * this_ptr, app::String * value))
}
