#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::Moon::EntityEvent {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::EntityEvent * this_ptr, app::Entity* entity))
}
