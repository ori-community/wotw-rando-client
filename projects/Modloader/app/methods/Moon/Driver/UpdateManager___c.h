#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateManager_Entry.h>
#include <Modloader/app/structs/UpdateManager_c.h>

namespace app::classes::Moon::Driver::UpdateManager___c {
    IL2CPP_REGISTER_METHOD(0x0313A430, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateManager_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4A040, bool, _DumpEntries_b__40_0, app::UpdateManager_c* this_ptr, app::UpdateManager_Entry* x)
    IL2CPP_REGISTER_METHOD(0x0313A570, bool, _DumpEntries_b__40_1, app::UpdateManager_c* this_ptr, app::UpdateManager_Entry* x)
    IL2CPP_REGISTER_METHOD(0x0313A5B0, bool, _DumpEntries_b__40_2, app::UpdateManager_c* this_ptr, app::UpdateManager_Entry* x)
    IL2CPP_REGISTER_METHOD(0x0313A5C0, bool, _DumpEntries_b__40_3, app::UpdateManager_c* this_ptr, app::UpdateManager_Entry* x)
    IL2CPP_REGISTER_METHOD(0x0313A680, bool, _DumpEntries_b__40_4, app::UpdateManager_c* this_ptr, app::UpdateManager_Entry* x)
    IL2CPP_REGISTER_METHOD(0x0313A6A0, bool, _DumpEntries_b__40_5, app::UpdateManager_c* this_ptr, app::UpdateManager_Entry* x)
} // namespace app::classes::Moon::Driver::UpdateManager___c
