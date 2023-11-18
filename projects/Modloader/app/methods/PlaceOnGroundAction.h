#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlaceOnGroundAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PlaceOnGroundAction {
    IL2CPP_REGISTER_METHOD(0x01164B20, void, Perform, (app::PlaceOnGroundAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlaceOnGroundAction * this_ptr))
} // namespace app::classes::PlaceOnGroundAction
