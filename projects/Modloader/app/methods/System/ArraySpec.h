#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ArraySpec {
    IL2CPP_REGISTER_METHOD(0x02298B90, void, ctor, (app::ArraySpec * this_ptr, int32_t dimensions, bool bound))
    IL2CPP_REGISTER_METHOD(0x02298BA0, app::Type*, Resolve, (app::ArraySpec * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02298C30, app::StringBuilder*, Append, (app::ArraySpec * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x02298D40, app::String*, ToString, (app::ArraySpec * this_ptr))
} // namespace app::classes::System::ArraySpec
