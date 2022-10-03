#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown_Show_c_AnonStorey1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dropdown_Show_c_AnonStorey1__Class** type_info;
        inline app::Dropdown_Show_c_AnonStorey1__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_Show_c_AnonStorey1__Class>(type_info, "UnityEngine.UI", "Dropdown", "<Show>c__AnonStorey1");
        }
        inline app::Dropdown_Show_c_AnonStorey1* create() {
            return il2cpp::create_object<app::Dropdown_Show_c_AnonStorey1>(get_class());
        }
    } // namespace Dropdown_Show_c_AnonStorey1
} // namespace app::classes::types
