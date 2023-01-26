#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comments.h>

namespace app::classes::RootMotion::Comments {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Comments * this_ptr))
}
