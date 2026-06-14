#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Record.h>

namespace app::classes::PhysicsDebugTools::Record {
    IL2CPP_REGISTER_METHOD(0x014FDDA0, void, ctor, app::Record* this_ptr)
}
