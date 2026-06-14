#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableDisableByPause.h>

namespace app::classes::EnableDisableByPause {
    IL2CPP_REGISTER_METHOD(0x00BFC650, void, Start, app::EnableDisableByPause* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EnableDisableByPause* this_ptr)
} // namespace app::classes::EnableDisableByPause
