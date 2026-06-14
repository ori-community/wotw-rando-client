#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpringSeinAction.h>

namespace app::classes::SpringSeinAction {
    IL2CPP_REGISTER_METHOD(0x009A8670, void, Perform, app::SpringSeinAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009A89E0, void, ctor, app::SpringSeinAction* this_ptr)
} // namespace app::classes::SpringSeinAction
