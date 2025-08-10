#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FacesPointXCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::FacesPointXCondition {
    IL2CPP_REGISTER_METHOD(0x00CB71A0, app::String*, get_Info, app::FacesPointXCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB7420, bool, OnCheck, app::FacesPointXCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, app::FacesPointXCondition* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::FacesPointXCondition
