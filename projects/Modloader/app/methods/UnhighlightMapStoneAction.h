#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnhighlightMapStoneAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::UnhighlightMapStoneAction {
    IL2CPP_REGISTER_METHOD(0x012ABAD0, void, Perform, (app::UnhighlightMapStoneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::UnhighlightMapStoneAction * this_ptr))
} // namespace app::classes::UnhighlightMapStoneAction
