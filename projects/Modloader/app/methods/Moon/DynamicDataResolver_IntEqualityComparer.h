#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::DynamicDataResolver_IntEqualityComparer {
    IL2CPP_REGISTER_METHOD(0x01B64A20, bool, Equals, (app::DynamicDataResolver_IntEqualityComparer * this_ptr, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x0167F5B0, int32_t, GetHashCode, (app::DynamicDataResolver_IntEqualityComparer * this_ptr, int32_t obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DynamicDataResolver_IntEqualityComparer * this_ptr))
} // namespace app::classes::Moon::DynamicDataResolver_IntEqualityComparer
