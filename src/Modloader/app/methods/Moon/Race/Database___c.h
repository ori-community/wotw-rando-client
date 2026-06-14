#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Database_c.h>
#include <Modloader/app/structs/LeaderBoardEntry.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::Moon::Race::Database___c {
    IL2CPP_REGISTER_METHOD(0x00C40DB0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Database_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C40EF0,
        int32_t,
        _GetLeaderBoardWithLocalPlayerTime_b__9_0,
        app::Database_c* this_ptr,
        app::LeaderBoardEntry* a,
        app::LeaderBoardEntry* b
    )
    IL2CPP_REGISTER_METHOD(0x00C40F40, void, _TryGet_b__11_1, app::Database_c* this_ptr, app::Task* t)
} // namespace app::classes::Moon::Race::Database___c
