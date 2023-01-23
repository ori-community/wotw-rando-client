#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetBooleanUberStateDescriptorValueAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SetBooleanUberStateDescriptorValueAction {
    IL2CPP_REGISTER_METHOD(0x005A1BA0, void, Perform, (app::SetBooleanUberStateDescriptorValueAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A1BD0, app::String*, GetNiceName, (app::SetBooleanUberStateDescriptorValueAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetBooleanUberStateDescriptorValueAction * this_ptr))
} // namespace app::classes::SetBooleanUberStateDescriptorValueAction
