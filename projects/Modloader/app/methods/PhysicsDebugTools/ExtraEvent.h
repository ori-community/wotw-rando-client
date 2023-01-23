#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExtraEvent.h>

namespace app::classes::PhysicsDebugTools::ExtraEvent {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExtraEvent * this_ptr))
}
