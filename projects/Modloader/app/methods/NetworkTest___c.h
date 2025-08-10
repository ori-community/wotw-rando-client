#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NetworkTest_c.h>
#include <Modloader/app/structs/StatusCallback.h>

namespace app::classes::NetworkTest___c {
    IL2CPP_REGISTER_METHOD(0x005F9C40, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NetworkTest_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F9D80, void, _AddReplay_b__6_0, app::NetworkTest_c* this_ptr, app::StatusCallback* callback)
    IL2CPP_REGISTER_METHOD(0x005F9D80, void, _WipeReplay_b__7_0, app::NetworkTest_c* this_ptr, app::StatusCallback* callback)
} // namespace app::classes::NetworkTest___c
