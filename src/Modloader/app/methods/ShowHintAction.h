#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowHintAction.h>

namespace app::classes::ShowHintAction {
    IL2CPP_REGISTER_METHOD(0x005C4820, void, Perform, app::ShowHintAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005C4940, void, ctor, app::ShowHintAction* this_ptr)
} // namespace app::classes::ShowHintAction
