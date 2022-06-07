#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GetEquipmentAction {
    IL2CPP_REGISTER_METHOD(0x00E11BE0, void, Perform, (app::GetEquipmentAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E11D10, void, ctor, (app::GetEquipmentAction * this_ptr))
}
