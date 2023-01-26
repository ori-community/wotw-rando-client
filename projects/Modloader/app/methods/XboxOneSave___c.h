#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxOneSave_c.h>

namespace app::classes::XboxOneSave___c {
    IL2CPP_REGISTER_METHOD(0x01C5ABB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneSave_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052E040, bool, _UpdateSaveGame_b__23_3, (app::XboxOneSave_c * this_ptr, bool o))
} // namespace app::classes::XboxOneSave___c
