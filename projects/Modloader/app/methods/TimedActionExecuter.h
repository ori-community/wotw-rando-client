#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimedActionExecuter.h>

namespace app::classes::TimedActionExecuter {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TimedActionExecuter* this_ptr)
}
