#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicGraphicsIsToggledCondition {
        namespace {
            app::DynamicGraphicsIsToggledCondition__Class* type_info_ref = nullptr;
        }
        app::DynamicGraphicsIsToggledCondition__Class** type_info = &type_info_ref;
        inline app::DynamicGraphicsIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::DynamicGraphicsIsToggledCondition__Class>(type_info, "", "DynamicGraphicsIsToggledCondition");
        }
        inline app::DynamicGraphicsIsToggledCondition* create() {
            return il2cpp::create_object<app::DynamicGraphicsIsToggledCondition>(get_class());
        }
    } // namespace DynamicGraphicsIsToggledCondition
} // namespace app::classes::types
