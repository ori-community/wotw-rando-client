#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ArgIterator {
    IL2CPP_REGISTER_METHOD(0x001E13F0, bool, Equals, (app::ArgIterator__Boxed * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHODINFO(0x04738D08, ArgIterator_Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::ArgIterator__Boxed * this_ptr))
} // namespace app::classes::System::ArgIterator
