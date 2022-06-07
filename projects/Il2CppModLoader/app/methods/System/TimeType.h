#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::TimeType {
    IL2CPP_REGISTER_METHOD(0x027AE320, void, ctor, (app::TimeType * this_ptr, int32_t offset, bool is_dst, app::String * abbrev))
    IL2CPP_REGISTER_METHOD(0x027AE330, app::String *, ToString, (app::TimeType * this_ptr))
}
