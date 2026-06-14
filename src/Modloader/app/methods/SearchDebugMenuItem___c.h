#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDebugMenuItem.h>
#include <Modloader/app/structs/SearchDebugMenuItem_c.h>

namespace app::classes::SearchDebugMenuItem___c {
    IL2CPP_REGISTER_METHOD(0x0106B400, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SearchDebugMenuItem_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0106B540,
        int32_t,
        _RefreshSearch_b__21_0,
        app::SearchDebugMenuItem_c* this_ptr,
        app::IDebugMenuItem* item1,
        app::IDebugMenuItem* item2
    )
} // namespace app::classes::SearchDebugMenuItem___c
