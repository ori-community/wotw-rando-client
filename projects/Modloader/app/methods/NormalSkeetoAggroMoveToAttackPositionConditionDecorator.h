#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/NormalSkeetoAggroMoveToAttackPositionConditionDecorator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::NormalSkeetoAggroMoveToAttackPositionConditionDecorator {
    IL2CPP_REGISTER_METHOD(0x0060C060, app::BehaviourStatus__Enum, OnExecute, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C0F0, float, GetUtility, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C160, bool, CheckCondition, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr))
} // namespace app::classes::NormalSkeetoAggroMoveToAttackPositionConditionDecorator
