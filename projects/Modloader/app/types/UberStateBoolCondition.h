#pragma once
#include <Modloader/app/structs/UberStateBoolCondition.h>
#include <Modloader/app/structs/UberStateBoolCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateBoolCondition {
        inline app::UberStateBoolCondition__Class** type_info() {
            static app::UberStateBoolCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateBoolCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateBoolCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateBoolCondition__Class>(type_info(), "", "UberStateBoolCondition");
        }
        inline app::UberStateBoolCondition* create() {
            return il2cpp::create_object<app::UberStateBoolCondition>(get_class());
        }
    } // namespace UberStateBoolCondition
} // namespace app::classes::types
