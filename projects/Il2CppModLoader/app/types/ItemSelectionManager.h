#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager {
        namespace {
            app::ItemSelectionManager__Class* type_info_ref = nullptr;
        }
        app::ItemSelectionManager__Class** type_info = &type_info_ref;
        inline app::ItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::ItemSelectionManager__Class>(type_info, "Moon.UI", "ItemSelectionManager");
        }
        inline app::ItemSelectionManager* create() {
            return il2cpp::create_object<app::ItemSelectionManager>(get_class());
        }
    } // namespace ItemSelectionManager
} // namespace app::classes::types
