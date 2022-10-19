#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotsItemsUI {
        namespace {
            inline app::SaveSlotsItemsUI__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotsItemsUI__Class** type_info = &type_info_ref;
        inline app::SaveSlotsItemsUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsItemsUI__Class>(type_info, "", "SaveSlotsItemsUI");
        }
        inline app::SaveSlotsItemsUI* create() {
            return il2cpp::create_object<app::SaveSlotsItemsUI>(get_class());
        }
    } // namespace SaveSlotsItemsUI
} // namespace app::classes::types
