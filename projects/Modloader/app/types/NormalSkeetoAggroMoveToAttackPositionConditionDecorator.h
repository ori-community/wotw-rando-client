#pragma once
#include <Modloader/app/structs/NormalSkeetoAggroMoveToAttackPositionConditionDecorator.h>
#include <Modloader/app/structs/NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NormalSkeetoAggroMoveToAttackPositionConditionDecorator {
        inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class** type_info() {
            static app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class* get_class() {
            return il2cpp::get_class<app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class>(type_info(), "", "NormalSkeetoAggroMoveToAttackPositionConditionDecorator");
        }
        inline app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator* create() {
            return il2cpp::create_object<app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator>(get_class());
        }
    } // namespace NormalSkeetoAggroMoveToAttackPositionConditionDecorator
} // namespace app::classes::types
