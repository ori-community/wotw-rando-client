#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameController_c.h>

namespace app::classes::GameController___c {
    IL2CPP_REGISTER_METHOD(0x00699730, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameController_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00699870, bool, _StartBuildInScene_b__178_0, (app::GameController_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00699940, bool, _StartBuildInScene_b__178_1, (app::GameController_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006999F0, bool, _StartBuildInScene_b__178_2, (app::GameController_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__359_0, (app::GameController_c * this_ptr, bool _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__359_1, (app::GameController_c * this_ptr))
} // namespace app::classes::GameController___c
