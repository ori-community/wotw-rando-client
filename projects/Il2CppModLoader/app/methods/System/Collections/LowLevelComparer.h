#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::LowLevelComparer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LowLevelComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202AFC0, int32_t, Compare, (app::LowLevelComparer * this_ptr, app::Object* a, app::Object* b))
    IL2CPP_REGISTER_METHODINFO(0x04711B68, LowLevelComparer_Compare__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202B110, void, cctor, ())
} // namespace app::classes::System::Collections::LowLevelComparer
