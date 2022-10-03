#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager_NavigationData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ItemSelectionManager_NavigationData__Class** type_info;
        inline app::ItemSelectionManager_NavigationData__Class* get_class() {
            return il2cpp::get_nested_class<app::ItemSelectionManager_NavigationData__Class>(type_info, "Moon.UI", "ItemSelectionManager", "NavigationData");
        }
        inline app::ItemSelectionManager_NavigationData* create() {
            return il2cpp::create_object<app::ItemSelectionManager_NavigationData>(get_class());
        }
        inline app::ItemSelectionManager_NavigationData__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemSelectionManager_NavigationData__Array>(get_class(), size);
        }
    } // namespace ItemSelectionManager_NavigationData
} // namespace app::classes::types
