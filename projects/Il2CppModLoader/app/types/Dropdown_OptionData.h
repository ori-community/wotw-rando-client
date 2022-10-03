#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown_OptionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dropdown_OptionData__Class** type_info;
        inline app::Dropdown_OptionData__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_OptionData__Class>(type_info, "UnityEngine.UI", "Dropdown", "OptionData");
        }
        inline app::Dropdown_OptionData* create() {
            return il2cpp::create_object<app::Dropdown_OptionData>(get_class());
        }
        inline app::Dropdown_OptionData__Array* create_array(int size) {
            return il2cpp::array_new<app::Dropdown_OptionData__Array>(get_class(), size);
        }
    } // namespace Dropdown_OptionData
} // namespace app::classes::types
