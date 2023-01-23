#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/LayerMask.h>

namespace app::classes::SeinSpellUtility {
    IL2CPP_REGISTER_METHOD(0x005DFD10, float, FindBestAngle, (app::Vector3 origin, bool left, app::LayerMask mask))
}
