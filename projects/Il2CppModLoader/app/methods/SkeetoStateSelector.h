#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SkeetoStateSelector {
    IL2CPP_REGISTER_METHOD(0x006B38E0, app::SkeetoEntity_SkeetoState__Enum, GetEnumValue, (app::SkeetoStateSelector * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006B3A60, void, ctor, (app::SkeetoStateSelector * this_ptr))
}
