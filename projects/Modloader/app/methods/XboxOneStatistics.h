#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_List_1__1.h>
#include <Modloader/app/structs/XboxOneStatistics.h>

namespace app::classes::XboxOneStatistics {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestStatistics, app::Action_1_System_Collections_Generic_List_1__1* callback, app::Action* failure)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XboxOneStatistics* this_ptr)
} // namespace app::classes::XboxOneStatistics
