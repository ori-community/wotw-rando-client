#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsItemsUI {
        namespace {
            app::SaveSlotsItemsUI__Class* type_info_ref = nullptr;
        }
        app::SaveSlotsItemsUI__Class** type_info = &type_info_ref;
        inline app::SaveSlotsItemsUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsItemsUI__Class>(type_info, "", "SaveSlotsItemsUI");
        }
        inline app::SaveSlotsItemsUI* create() {
            return il2cpp::create_object<app::SaveSlotsItemsUI>(get_class());
        }
    } // namespace SaveSlotsItemsUI
} // namespace app::classes::types
