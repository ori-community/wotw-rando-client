#pragma once
#include <Modloader/app/structs/ChangeStateOnCondition.h>
#include <Modloader/app/structs/ChangeStateOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateOnCondition {
        inline app::ChangeStateOnCondition__Class** type_info() {
            static app::ChangeStateOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnCondition__Class>(type_info(), "Moon.Setups", "ChangeStateOnCondition");
        }
        inline app::ChangeStateOnCondition* create() {
            return il2cpp::create_object<app::ChangeStateOnCondition>(get_class());
        }
    } // namespace ChangeStateOnCondition
} // namespace app::classes::types
