#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GasballSetIsChasingOri.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GasballSetIsChasingOri {
    IL2CPP_REGISTER_METHOD(0x00420B20, app::BehaviourStatus__Enum, OnExecute, (app::GasballSetIsChasingOri * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420BC0, void, ctor, (app::GasballSetIsChasingOri * this_ptr))
} // namespace app::classes::GasballSetIsChasingOri
