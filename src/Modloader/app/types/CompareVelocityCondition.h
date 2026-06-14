#pragma once
#include <Modloader/app/structs/CompareVelocityCondition.h>
#include <Modloader/app/structs/CompareVelocityCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompareVelocityCondition {
        inline app::CompareVelocityCondition__Class** type_info() {
            static app::CompareVelocityCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompareVelocityCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompareVelocityCondition__Class* get_class() {
            return il2cpp::get_class<app::CompareVelocityCondition__Class>(type_info(), "", "CompareVelocityCondition");
        }
        inline app::CompareVelocityCondition* create() {
            return il2cpp::create_object<app::CompareVelocityCondition>(get_class());
        }
    } // namespace CompareVelocityCondition
} // namespace app::classes::types
