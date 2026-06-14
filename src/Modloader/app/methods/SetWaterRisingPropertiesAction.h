#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetWaterRisingPropertiesAction.h>

namespace app::classes::SetWaterRisingPropertiesAction {
    IL2CPP_REGISTER_METHOD(0x005A50B0, void, Perform, app::SetWaterRisingPropertiesAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005A5240, void, ctor, app::SetWaterRisingPropertiesAction* this_ptr)
} // namespace app::classes::SetWaterRisingPropertiesAction
