#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageTextAction {
    IL2CPP_REGISTER_METHOD(0x00DCA540, void, Perform, (app::DamageTextAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DCA560, app::String *, GetNiceName, (app::DamageTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DamageTextAction * this_ptr))
}
