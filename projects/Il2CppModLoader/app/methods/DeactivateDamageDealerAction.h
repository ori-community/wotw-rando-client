#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DeactivateDamageDealerAction {
    IL2CPP_REGISTER_METHOD(0x00DD63B0, void, Perform, (app::DeactivateDamageDealerAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DD64A0, void, Serialize, (app::DeactivateDamageDealerAction * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00DD6630, app::String*, GetNiceName, (app::DeactivateDamageDealerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DeactivateDamageDealerAction * this_ptr))
} // namespace app::classes::DeactivateDamageDealerAction
