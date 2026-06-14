#pragma once
#include <Modloader/app/structs/CustomCondition.h>
#include <Modloader/app/structs/CustomCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomCondition {
        inline app::CustomCondition__Class** type_info() {
            static app::CustomCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomCondition__Class* get_class() {
            return il2cpp::get_class<app::CustomCondition__Class>(type_info(), "", "CustomCondition");
        }
        inline app::CustomCondition* create() {
            return il2cpp::create_object<app::CustomCondition>(get_class());
        }
    } // namespace CustomCondition
} // namespace app::classes::types
