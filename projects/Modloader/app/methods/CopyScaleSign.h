#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CopyScaleSign.h>

namespace app::classes::CopyScaleSign {
    IL2CPP_REGISTER_METHOD(0x011F6420, void, Update, (app::CopyScaleSign * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CopyScaleSign * this_ptr))
} // namespace app::classes::CopyScaleSign
