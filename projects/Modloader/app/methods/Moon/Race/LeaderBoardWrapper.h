#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderBoardWrapper.h>

namespace app::classes::Moon::Race::LeaderBoardWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeaderBoardWrapper* this_ptr)
}
