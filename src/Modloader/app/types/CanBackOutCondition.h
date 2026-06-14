#pragma once
#include <Modloader/app/structs/CanBackOutCondition.h>
#include <Modloader/app/structs/CanBackOutCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanBackOutCondition {
        inline app::CanBackOutCondition__Class** type_info() {
            static app::CanBackOutCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanBackOutCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanBackOutCondition__Class* get_class() {
            return il2cpp::get_class<app::CanBackOutCondition__Class>(type_info(), "", "CanBackOutCondition");
        }
        inline app::CanBackOutCondition* create() {
            return il2cpp::create_object<app::CanBackOutCondition>(get_class());
        }
    } // namespace CanBackOutCondition
} // namespace app::classes::types
