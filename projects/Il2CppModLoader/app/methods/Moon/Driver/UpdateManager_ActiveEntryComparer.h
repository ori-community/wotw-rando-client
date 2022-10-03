#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Driver::UpdateManager_ActiveEntryComparer {
    IL2CPP_REGISTER_METHOD(0x0313A6B0, int32_t, Compare, (app::UpdateManager_ActiveEntryComparer * this_ptr, app::UpdateManager_Entry* x, app::UpdateManager_Entry* y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateManager_ActiveEntryComparer * this_ptr))
} // namespace app::classes::Moon::Driver::UpdateManager_ActiveEntryComparer
