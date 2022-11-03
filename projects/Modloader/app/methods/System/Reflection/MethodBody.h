#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::MethodBody {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MethodBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Byte__Array*, GetILAsByteArray, (app::MethodBody * this_ptr))
} // namespace app::classes::System::Reflection::MethodBody
