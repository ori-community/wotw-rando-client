#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatAndMouseKuroKillController.h>

namespace app::classes::CatAndMouseKuroKillController {
    IL2CPP_REGISTER_METHOD(0x00B48300, void, Awake, (app::CatAndMouseKuroKillController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B483A0, void, Attack, (app::CatAndMouseKuroKillController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Escaped, (app::CatAndMouseKuroKillController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CatAndMouseKuroKillController * this_ptr))
} // namespace app::classes::CatAndMouseKuroKillController
