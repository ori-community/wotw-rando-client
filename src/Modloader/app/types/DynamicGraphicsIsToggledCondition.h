#pragma once
#include <Modloader/app/structs/DynamicGraphicsIsToggledCondition.h>
#include <Modloader/app/structs/DynamicGraphicsIsToggledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicGraphicsIsToggledCondition {
        inline app::DynamicGraphicsIsToggledCondition__Class** type_info() {
            static app::DynamicGraphicsIsToggledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicGraphicsIsToggledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicGraphicsIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::DynamicGraphicsIsToggledCondition__Class>(type_info(), "", "DynamicGraphicsIsToggledCondition");
        }
        inline app::DynamicGraphicsIsToggledCondition* create() {
            return il2cpp::create_object<app::DynamicGraphicsIsToggledCondition>(get_class());
        }
    } // namespace DynamicGraphicsIsToggledCondition
} // namespace app::classes::types
