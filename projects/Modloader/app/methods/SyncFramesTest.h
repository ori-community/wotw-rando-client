#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SyncFramesTest {
    IL2CPP_REGISTER_METHOD(0x00514420, bool, get_TimeIsScaled, (app::SyncFramesTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00514570, void, ResetSync, (app::SyncFramesTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00514610, void, Update, (app::SyncFramesTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SyncFramesTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::SyncFramesTest
