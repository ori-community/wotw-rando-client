#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LookAt.h>

namespace app::classes::LookAt {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::LookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ECFC0, void, Update, (app::LookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LookAt * this_ptr))
} // namespace app::classes::LookAt
