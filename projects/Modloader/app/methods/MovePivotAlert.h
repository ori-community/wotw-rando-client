#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MovePivotAlert.h>

namespace app::classes::MovePivotAlert {
    IL2CPP_REGISTER_METHOD(0x00868670, void, OnDrawGizmos, app::MovePivotAlert* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MovePivotAlert* this_ptr)
} // namespace app::classes::MovePivotAlert
