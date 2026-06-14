#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MarkSavePedestalAsUsedAction.h>

namespace app::classes::MarkSavePedestalAsUsedAction {
    IL2CPP_REGISTER_METHOD(0x00A0FDE0, void, Perform, app::MarkSavePedestalAsUsedAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::MarkSavePedestalAsUsedAction* this_ptr)
} // namespace app::classes::MarkSavePedestalAsUsedAction
