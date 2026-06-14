#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowQuestHint.h>

namespace app::classes::ShowQuestHint {
    IL2CPP_REGISTER_METHOD(0x00736B70, void, Perform, app::ShowQuestHint* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ShowQuestHint* this_ptr)
} // namespace app::classes::ShowQuestHint
