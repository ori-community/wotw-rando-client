#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsInNPCInteractionCondition.h>

namespace app::classes::IsInNPCInteractionCondition {
    IL2CPP_REGISTER_METHOD(0x00646140, bool, Validate, app::IsInNPCInteractionCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsInNPCInteractionCondition* this_ptr)
} // namespace app::classes::IsInNPCInteractionCondition
