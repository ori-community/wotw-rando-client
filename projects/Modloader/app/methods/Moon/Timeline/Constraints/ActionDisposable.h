#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionDisposable_1.h>

namespace app::classes::Moon::Timeline::Constraints::ActionDisposable {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ActionDisposable_1* this_ptr, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x013E0070, void, Dispose, app::ActionDisposable_1* this_ptr)
} // namespace app::classes::Moon::Timeline::Constraints::ActionDisposable
