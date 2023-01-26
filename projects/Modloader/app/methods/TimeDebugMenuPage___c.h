#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeDebugMenuPage_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TimeDebugMenuPage___c {
    IL2CPP_REGISTER_METHOD(0x010EF780, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimeDebugMenuPage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EF8C0, bool, _GetItems_b__9_2, (app::TimeDebugMenuPage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EF960, void, _GetItems_b__9_3, (app::TimeDebugMenuPage_c * this_ptr, bool val))
    IL2CPP_REGISTER_METHOD(0x010EFA10, bool, _GetItems_b__9_4, (app::TimeDebugMenuPage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EFAB0, void, _GetItems_b__9_5, (app::TimeDebugMenuPage_c * this_ptr, bool val))
    IL2CPP_REGISTER_METHOD(0x010EFB60, bool, _GetItems_b__9_6, (app::TimeDebugMenuPage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EFBF0, void, _GetItems_b__9_7, (app::TimeDebugMenuPage_c * this_ptr, bool v))
    IL2CPP_REGISTER_METHOD(0x010EFD90, app::String*, _GetItems_b__9_8, (app::TimeDebugMenuPage_c * this_ptr))
} // namespace app::classes::TimeDebugMenuPage___c
