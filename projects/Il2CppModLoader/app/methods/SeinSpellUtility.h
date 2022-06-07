#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinSpellUtility {
    IL2CPP_REGISTER_METHOD(0x005DFD10, float, FindBestAngle, (app::Vector3 origin, bool left, app::LayerMask mask))
}
