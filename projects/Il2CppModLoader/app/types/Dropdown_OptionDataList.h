#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown_OptionDataList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dropdown_OptionDataList__Class** type_info;
        inline app::Dropdown_OptionDataList__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_OptionDataList__Class>(type_info, "UnityEngine.UI", "Dropdown", "OptionDataList");
        }
        inline app::Dropdown_OptionDataList* create() {
            return il2cpp::create_object<app::Dropdown_OptionDataList>(get_class());
        }
    } // namespace Dropdown_OptionDataList
} // namespace app::classes::types
