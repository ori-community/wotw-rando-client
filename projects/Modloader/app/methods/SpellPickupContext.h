#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellPickupContext.h>

namespace app::classes::SpellPickupContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpellPickupContext* this_ptr)
}
