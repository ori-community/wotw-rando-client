#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BulletHole {
    IL2CPP_REGISTER_METHOD(0x021FB080, void, Start, (app::BulletHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021FB1D0, app::IEnumerator*, DestroyDelayed, (app::BulletHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021FB320, void, ctor, (app::BulletHole * this_ptr))
} // namespace app::classes::BulletHole
