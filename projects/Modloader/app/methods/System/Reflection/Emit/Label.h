#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::Emit::Label {
    IL2CPP_REGISTER_METHOD(0x001FC9E0, bool, Equals, (app::Label__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::Label__Boxed * this_ptr))
} // namespace app::classes::System::Reflection::Emit::Label
