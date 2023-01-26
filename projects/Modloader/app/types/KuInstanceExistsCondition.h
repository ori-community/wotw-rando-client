#pragma once
#include <Modloader/app/structs/KuInstanceExistsCondition.h>
#include <Modloader/app/structs/KuInstanceExistsCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuInstanceExistsCondition {
        inline app::KuInstanceExistsCondition__Class** type_info() {
            static app::KuInstanceExistsCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuInstanceExistsCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuInstanceExistsCondition__Class* get_class() {
            return il2cpp::get_class<app::KuInstanceExistsCondition__Class>(type_info(), "", "KuInstanceExistsCondition");
        }
        inline app::KuInstanceExistsCondition* create() {
            return il2cpp::create_object<app::KuInstanceExistsCondition>(get_class());
        }
    } // namespace KuInstanceExistsCondition
} // namespace app::classes::types
