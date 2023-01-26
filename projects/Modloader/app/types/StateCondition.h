#pragma once
#include <Modloader/app/structs/StateCondition.h>
#include <Modloader/app/structs/StateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateCondition {
        inline app::StateCondition__Class** type_info() {
            static app::StateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateCondition__Class* get_class() {
            return il2cpp::get_class<app::StateCondition__Class>(type_info(), "", "StateCondition");
        }
        inline app::StateCondition* create() {
            return il2cpp::create_object<app::StateCondition>(get_class());
        }
    } // namespace StateCondition
} // namespace app::classes::types
