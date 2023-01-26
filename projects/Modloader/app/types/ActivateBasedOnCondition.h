#pragma once
#include <Modloader/app/structs/ActivateBasedOnCondition.h>
#include <Modloader/app/structs/ActivateBasedOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateBasedOnCondition {
        inline app::ActivateBasedOnCondition__Class** type_info() {
            static app::ActivateBasedOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateBasedOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateBasedOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ActivateBasedOnCondition__Class>(type_info(), "", "ActivateBasedOnCondition");
        }
        inline app::ActivateBasedOnCondition* create() {
            return il2cpp::create_object<app::ActivateBasedOnCondition>(get_class());
        }
    } // namespace ActivateBasedOnCondition
} // namespace app::classes::types
