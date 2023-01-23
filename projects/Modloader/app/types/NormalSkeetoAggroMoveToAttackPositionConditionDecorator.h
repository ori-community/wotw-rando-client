#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class.h>
#include <Modloader/app/structs/NormalSkeetoAggroMoveToAttackPositionConditionDecorator.h>

namespace app::classes::types {
    namespace NormalSkeetoAggroMoveToAttackPositionConditionDecorator {
        namespace {
            inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class* type_info_ref = nullptr;
        }
        inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class** type_info = &type_info_ref;
        inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class* get_class() {
            return il2cpp::get_class<app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class>(type_info, "", "NormalSkeetoAggroMoveToAttackPositionConditionDecorator");
        }
        inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator* create() {
            return il2cpp::create_object<app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator>(get_class());
        }
    } // namespace NormalSkeetoAggroMoveToAttackPositionConditionDecorator
} // namespace app::classes::types
