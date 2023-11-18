#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageTextAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DamageTextAction {
    IL2CPP_REGISTER_METHOD(0x00DCA540, void, Perform, (app::DamageTextAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DCA560, app::String*, GetNiceName, (app::DamageTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DamageTextAction * this_ptr))
} // namespace app::classes::DamageTextAction
