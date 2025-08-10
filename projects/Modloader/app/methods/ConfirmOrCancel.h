#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ConfirmOrCancel.h>

namespace app::classes::ConfirmOrCancel {
    IL2CPP_REGISTER_METHOD(0x011E49B0, void, add_OnConfirm, app::ConfirmOrCancel* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x011E4AA0, void, remove_OnConfirm, app::ConfirmOrCancel* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x011E4B90, void, FixedUpdate, app::ConfirmOrCancel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ConfirmOrCancel* this_ptr)
} // namespace app::classes::ConfirmOrCancel
