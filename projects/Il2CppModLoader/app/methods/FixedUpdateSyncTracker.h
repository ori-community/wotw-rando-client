#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FixedUpdateSyncTracker {
    IL2CPP_REGISTER_METHOD(0x01973200, void, FixedUpdate, (app::FixedUpdateSyncTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01973210, void, Update, (app::FixedUpdateSyncTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01973700, void, Flush, (app::FixedUpdateSyncTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019738D0, void, OnDestroy, (app::FixedUpdateSyncTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FixedUpdateSyncTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::FixedUpdateSyncTracker
