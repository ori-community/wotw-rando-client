#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MistyWoodsKuroHideZoneAction.h>

namespace app::classes::MistyWoodsKuroHideZoneAction {
    IL2CPP_REGISTER_METHOD(0x0132B120, void, Perform, app::MistyWoodsKuroHideZoneAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x004C8C00, void, ctor, app::MistyWoodsKuroHideZoneAction* this_ptr)
} // namespace app::classes::MistyWoodsKuroHideZoneAction
