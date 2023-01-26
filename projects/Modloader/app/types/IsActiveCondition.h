#pragma once
#include <Modloader/app/structs/IsActiveCondition.h>
#include <Modloader/app/structs/IsActiveCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsActiveCondition {
        inline app::IsActiveCondition__Class** type_info() {
            static app::IsActiveCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsActiveCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsActiveCondition__Class* get_class() {
            return il2cpp::get_class<app::IsActiveCondition__Class>(type_info(), "", "IsActiveCondition");
        }
        inline app::IsActiveCondition* create() {
            return il2cpp::create_object<app::IsActiveCondition>(get_class());
        }
    } // namespace IsActiveCondition
} // namespace app::classes::types
