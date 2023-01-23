#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeathWisp.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DeathWisp {
    IL2CPP_REGISTER_METHOD(0x00A1B030, void, Awake, (app::DeathWisp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006260E0, app::Vector3, get_Position, (app::DeathWisp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDF6A0, void, FixedUpdate, (app::DeathWisp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Collect, (app::DeathWisp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDFBA0, void, ctor, (app::DeathWisp * this_ptr))
} // namespace app::classes::DeathWisp
