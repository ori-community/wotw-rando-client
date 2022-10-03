#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDRIsToggledCondition {
        namespace {
            app::HDRIsToggledCondition__Class* type_info_ref = nullptr;
        }
        app::HDRIsToggledCondition__Class** type_info = &type_info_ref;
        inline app::HDRIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDRIsToggledCondition__Class>(type_info, "", "HDRIsToggledCondition");
        }
        inline app::HDRIsToggledCondition* create() {
            return il2cpp::create_object<app::HDRIsToggledCondition>(get_class());
        }
    } // namespace HDRIsToggledCondition
} // namespace app::classes::types
