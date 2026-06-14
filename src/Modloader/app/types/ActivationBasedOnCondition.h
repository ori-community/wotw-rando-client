#pragma once
#include <Modloader/app/structs/ActivationBasedOnCondition.h>
#include <Modloader/app/structs/ActivationBasedOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivationBasedOnCondition {
        inline app::ActivationBasedOnCondition__Class** type_info() {
            static app::ActivationBasedOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivationBasedOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivationBasedOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ActivationBasedOnCondition__Class>(type_info(), "", "ActivationBasedOnCondition");
        }
        inline app::ActivationBasedOnCondition* create() {
            return il2cpp::create_object<app::ActivationBasedOnCondition>(get_class());
        }
    } // namespace ActivationBasedOnCondition
} // namespace app::classes::types
