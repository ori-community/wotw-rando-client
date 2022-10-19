#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HDRIsToggledCondition {
        namespace {
            inline app::HDRIsToggledCondition__Class* type_info_ref = nullptr;
        }
        inline app::HDRIsToggledCondition__Class** type_info = &type_info_ref;
        inline app::HDRIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDRIsToggledCondition__Class>(type_info, "", "HDRIsToggledCondition");
        }
        inline app::HDRIsToggledCondition* create() {
            return il2cpp::create_object<app::HDRIsToggledCondition>(get_class());
        }
    } // namespace HDRIsToggledCondition
} // namespace app::classes::types
