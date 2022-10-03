#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Comparer {
    IL2CPP_REGISTER_METHOD(0x02017D00, int32_t, IComparer_Compare, (app::Comparer_1 * this_ptr, app::Object* ol, app::Object* or_1))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Comparer_1 * this_ptr))
} // namespace app::classes::System::Net::Comparer
