#pragma once
#include <Modloader/app/structs/ItemSelectionManager_NavigationData__Array.h>
#include <Modloader/app/structs/ItemSelectionManager_NavigationData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager_NavigationData__Array {
        inline app::ItemSelectionManager_NavigationData__Array__Class** type_info() {
            static app::ItemSelectionManager_NavigationData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemSelectionManager_NavigationData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemSelectionManager_NavigationData__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemSelectionManager_NavigationData__Array__Class>(type_info(), "Moon.UI", "ItemSelectionManager+NavigationData[]");
        }
        inline app::ItemSelectionManager_NavigationData__Array* create() {
            return il2cpp::create_object<app::ItemSelectionManager_NavigationData__Array>(get_class());
        }
    } // namespace ItemSelectionManager_NavigationData__Array
} // namespace app::classes::types
