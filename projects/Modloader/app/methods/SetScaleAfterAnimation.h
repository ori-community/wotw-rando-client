#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetScaleAfterAnimation.h>

namespace app::classes::SetScaleAfterAnimation {
    IL2CPP_REGISTER_METHOD(0x005A41C0, void, LateUpdate, (app::SetScaleAfterAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SetScaleAfterAnimation * this_ptr))
} // namespace app::classes::SetScaleAfterAnimation
