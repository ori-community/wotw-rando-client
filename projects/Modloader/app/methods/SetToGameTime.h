#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetToGameTime.h>

namespace app::classes::SetToGameTime {
    IL2CPP_REGISTER_METHOD(0x005A4E40, void, Update, app::SetToGameTime* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SetToGameTime* this_ptr)
} // namespace app::classes::SetToGameTime
