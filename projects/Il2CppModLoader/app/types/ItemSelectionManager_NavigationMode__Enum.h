#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager_NavigationMode__Enum {
        namespace {
            app::ItemSelectionManager_NavigationMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ItemSelectionManager_NavigationMode__Enum__Class** type_info = &type_info_ref;
        inline app::ItemSelectionManager_NavigationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ItemSelectionManager_NavigationMode__Enum__Class>(type_info, "Moon.UI", "ItemSelectionManager", "NavigationMode");
        }
        inline app::ItemSelectionManager_NavigationMode__Enum* create() {
            return il2cpp::create_object<app::ItemSelectionManager_NavigationMode__Enum>(get_class());
        }
    } // namespace ItemSelectionManager_NavigationMode__Enum
} // namespace app::classes::types
