#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AsyncRaycast {
    IL2CPP_REGISTER_METHOD(0x00842A00, void, ctor, (app::AsyncRaycast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00842A40, void, Dispose, (app::AsyncRaycast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00842A80, void, RequestCast, (app::AsyncRaycast * this_ptr, app::Vector3 from, app::Vector3 to, app::LayerMask mask))
    IL2CPP_REGISTER_METHOD(0x00842CC0, void, Cancel, (app::AsyncRaycast * this_ptr))
} // namespace app::classes::AsyncRaycast
