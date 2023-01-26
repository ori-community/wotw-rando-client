#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetEquipmentAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GetEquipmentAction {
    IL2CPP_REGISTER_METHOD(0x00E11BE0, void, Perform, (app::GetEquipmentAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E11D10, void, ctor, (app::GetEquipmentAction * this_ptr))
} // namespace app::classes::GetEquipmentAction
