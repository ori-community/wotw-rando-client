#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnhighlightOriInterestTrigger.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::UnhighlightOriInterestTrigger {
    IL2CPP_REGISTER_METHOD(0x012ABAF0, void, Perform, (app::UnhighlightOriInterestTrigger * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::UnhighlightOriInterestTrigger * this_ptr))
} // namespace app::classes::UnhighlightOriInterestTrigger
