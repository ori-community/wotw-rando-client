#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityContext.h>

namespace app::classes::EntityContext {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Entity*, get_Entity, (app::EntityContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Entity, (app::EntityContext * this_ptr, app::Entity* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::EntityContext * this_ptr, app::Entity* entity))
} // namespace app::classes::EntityContext
