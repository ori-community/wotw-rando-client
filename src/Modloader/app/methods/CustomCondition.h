#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CustomCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ICustomConditionDefinition.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CustomCondition {
    IL2CPP_REGISTER_METHOD(0x00DBB040, void, OnValidate, app::CustomCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBB150, app::ICustomConditionDefinition*, get_ResolvedConditionDefinition, app::CustomCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBB210, bool, Validate, app::CustomCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DBB2D0, app::String*, GetNiceName, app::CustomCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072FBB0, void, ctor, app::CustomCondition* this_ptr)
} // namespace app::classes::CustomCondition
