#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LetterboxAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LetterboxAction {
    IL2CPP_REGISTER_METHOD(0x011325F0, void, Perform, app::LetterboxAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011326C0, app::String*, GetNiceName, app::LetterboxAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01132750, void, ctor, app::LetterboxAction* this_ptr)
} // namespace app::classes::LetterboxAction
