#pragma once
#include <Modloader/app/structs/ItemSelectionManager.h>
#include <Modloader/app/structs/ItemSelectionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager {
        inline app::ItemSelectionManager__Class** type_info() {
            static app::ItemSelectionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemSelectionManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::ItemSelectionManager__Class>(type_info(), "Moon.UI", "ItemSelectionManager");
        }
        inline app::ItemSelectionManager* create() {
            return il2cpp::create_object<app::ItemSelectionManager>(get_class());
        }
    } // namespace ItemSelectionManager
} // namespace app::classes::types
