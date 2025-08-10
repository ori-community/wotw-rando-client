#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityFallEvent.h>

namespace app::classes::Moon::EntityFallEvent {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::EntityFallEvent* this_ptr, app::Entity* entity)
}
