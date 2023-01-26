#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Water3Float.h>

namespace app::classes::Water3Float {
    IL2CPP_REGISTER_METHOD(0x02D75770, void, Start, (app::Water3Float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D758D0, void, Update, (app::Water3Float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Water3Float * this_ptr))
} // namespace app::classes::Water3Float
