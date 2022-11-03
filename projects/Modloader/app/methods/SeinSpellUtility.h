#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinSpellUtility {
    IL2CPP_REGISTER_METHOD(0x005DFD10, float, FindBestAngle, (app::Vector3 origin, bool left, app::LayerMask mask))
}
