#pragma once
#include <Modloader/app/structs/ItemSelectionManager_NavigationMode__Enum.h>
#include <Modloader/app/structs/ItemSelectionManager_NavigationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager_NavigationMode__Enum {
        inline app::ItemSelectionManager_NavigationMode__Enum__Class** type_info() {
            static app::ItemSelectionManager_NavigationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemSelectionManager_NavigationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemSelectionManager_NavigationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ItemSelectionManager_NavigationMode__Enum__Class>(type_info(), "Moon.UI", "ItemSelectionManager", "NavigationMode");
        }
        inline app::ItemSelectionManager_NavigationMode__Enum* create() {
            return il2cpp::create_object<app::ItemSelectionManager_NavigationMode__Enum>(get_class());
        }
    } // namespace ItemSelectionManager_NavigationMode__Enum
} // namespace app::classes::types
