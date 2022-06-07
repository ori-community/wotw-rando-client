#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::MethodBody {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MethodBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Byte__Array *, GetILAsByteArray, (app::MethodBody * this_ptr))
}
