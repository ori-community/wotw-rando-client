#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateManager_Entry.h>

namespace app::classes::Moon::Driver::UpdateManager_Entry {
    IL2CPP_REGISTER_METHOD(0x0313A6F0, bool, get_ShouldUpdate, (app::UpdateManager_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0313A880, void, Reset, (app::UpdateManager_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0313A940, void, ctor, (app::UpdateManager_Entry * this_ptr))
} // namespace app::classes::Moon::Driver::UpdateManager_Entry
