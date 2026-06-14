#pragma once
#include <Modloader/app/structs/ChangeMultipleStatesOnCondition.h>
#include <Modloader/app/structs/ChangeMultipleStatesOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeMultipleStatesOnCondition {
        inline app::ChangeMultipleStatesOnCondition__Class** type_info() {
            static app::ChangeMultipleStatesOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeMultipleStatesOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeMultipleStatesOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ChangeMultipleStatesOnCondition__Class>(type_info(), "Moon.Setups", "ChangeMultipleStatesOnCondition");
        }
        inline app::ChangeMultipleStatesOnCondition* create() {
            return il2cpp::create_object<app::ChangeMultipleStatesOnCondition>(get_class());
        }
    } // namespace ChangeMultipleStatesOnCondition
} // namespace app::classes::types
