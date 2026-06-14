#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/LizardDodgeEvent.h>

namespace app::classes::LizardDodgeEvent {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::LizardDodgeEvent* this_ptr, app::Entity* entity)
}
