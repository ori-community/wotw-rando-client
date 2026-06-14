#pragma once
#include <Modloader/app/structs/HealthCondition.h>
#include <Modloader/app/structs/HealthCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthCondition {
        inline app::HealthCondition__Class** type_info() {
            static app::HealthCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HealthCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HealthCondition__Class* get_class() {
            return il2cpp::get_class<app::HealthCondition__Class>(type_info(), "", "HealthCondition");
        }
        inline app::HealthCondition* create() {
            return il2cpp::create_object<app::HealthCondition>(get_class());
        }
    } // namespace HealthCondition
} // namespace app::classes::types
