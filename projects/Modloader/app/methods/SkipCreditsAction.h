#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SkipCreditsAction.h>

namespace app::classes::SkipCreditsAction {
    IL2CPP_REGISTER_METHOD(0x00447380, void, Awake, app::SkipCreditsAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C08B0, void, Perform, app::SkipCreditsAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::SkipCreditsAction* this_ptr)
} // namespace app::classes::SkipCreditsAction
