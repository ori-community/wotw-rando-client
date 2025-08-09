#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggroSelector.h>

namespace app::classes::AggroSelector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AggroSelector* this_ptr)
}
