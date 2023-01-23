#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DisableTargetForSeconds.h>

namespace app::classes::DisableTargetForSeconds {
    IL2CPP_REGISTER_METHOD(0x00B98C70, void, OnEnable, (app::DisableTargetForSeconds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98DA0, void, FixedUpdate, (app::DisableTargetForSeconds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98E20, void, KeepTargetDisabled, (app::DisableTargetForSeconds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98EE0, void, ctor, (app::DisableTargetForSeconds * this_ptr))
} // namespace app::classes::DisableTargetForSeconds
