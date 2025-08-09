#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetColosseumTimeAction.h>

namespace app::classes::SetColosseumTimeAction {
    IL2CPP_REGISTER_METHOD(0x005A2320, void, Perform, app::SetColosseumTimeAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::SetColosseumTimeAction* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::SetColosseumTimeAction* this_ptr)
} // namespace app::classes::SetColosseumTimeAction
