#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WoodenGateDamageAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::WoodenGateDamageAction {
    IL2CPP_REGISTER_METHOD(0x0057E950, void, Perform, (app::WoodenGateDamageAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WoodenGateDamageAction * this_ptr))
} // namespace app::classes::WoodenGateDamageAction
