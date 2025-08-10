#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VelocityChangeEntry.h>

namespace app::classes::PhysicsDebugTools::VelocityChangeEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VelocityChangeEntry* this_ptr)
}
