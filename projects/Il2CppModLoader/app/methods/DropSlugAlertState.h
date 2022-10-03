#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DropSlugAlertState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugAlertState * this_ptr, app::DropSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x00BE0F10, void, OnEnter, (app::DropSlugAlertState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE0F80, void, OnExit, (app::DropSlugAlertState * this_ptr))
} // namespace app::classes::DropSlugAlertState
