#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::CultureAwareComparer {
    IL2CPP_REGISTER_METHOD(0x028A0750, void, ctor, (app::CultureAwareComparer * this_ptr, app::CultureInfo* culture, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x028A0830, int32_t, Compare, (app::CultureAwareComparer * this_ptr, app::String* x, app::String* y))
    IL2CPP_REGISTER_METHOD(0x028A0890, bool, Equals_1, (app::CultureAwareComparer * this_ptr, app::String* x, app::String* y))
    IL2CPP_REGISTER_METHOD(0x028A08F0, int32_t, GetHashCode_1, (app::CultureAwareComparer * this_ptr, app::String* obj))
    IL2CPP_REGISTER_METHODINFO(0x04771020, CultureAwareComparer_GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028A0AC0, bool, Equals_2, (app::CultureAwareComparer * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x028A0BB0, int32_t, GetHashCode_2, (app::CultureAwareComparer * this_ptr))
} // namespace app::classes::System::CultureAwareComparer
