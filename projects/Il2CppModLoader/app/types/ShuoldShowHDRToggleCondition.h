#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShuoldShowHDRToggleCondition {
        namespace {
            inline app::ShuoldShowHDRToggleCondition__Class* type_info_ref = nullptr;
        }
        inline app::ShuoldShowHDRToggleCondition__Class** type_info = &type_info_ref;
        inline app::ShuoldShowHDRToggleCondition__Class* get_class() {
            return il2cpp::get_class<app::ShuoldShowHDRToggleCondition__Class>(type_info, "", "ShuoldShowHDRToggleCondition");
        }
        inline app::ShuoldShowHDRToggleCondition* create() {
            return il2cpp::create_object<app::ShuoldShowHDRToggleCondition>(get_class());
        }
    } // namespace ShuoldShowHDRToggleCondition
} // namespace app::classes::types
