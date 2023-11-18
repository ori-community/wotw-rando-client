#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowSpiritTreeTextAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowSpiritTreeTextAction {
    IL2CPP_REGISTER_METHOD(0x007375E0, void, Perform, (app::ShowSpiritTreeTextAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00737F00, void, ctor, (app::ShowSpiritTreeTextAction * this_ptr))
} // namespace app::classes::ShowSpiritTreeTextAction
