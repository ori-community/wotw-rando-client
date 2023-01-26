#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionDisposable.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::ActionDisposable {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ActionDisposable * this_ptr, app::Action* on_dispose))
    IL2CPP_REGISTER_METHOD(0x013E0070, void, Dispose, (app::ActionDisposable * this_ptr))
} // namespace app::classes::ActionDisposable
