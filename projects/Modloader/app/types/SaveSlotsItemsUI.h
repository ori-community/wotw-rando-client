#pragma once
#include <Modloader/app/structs/SaveSlotsItemsUI.h>
#include <Modloader/app/structs/SaveSlotsItemsUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsItemsUI {
        inline app::SaveSlotsItemsUI__Class** type_info() {
            static app::SaveSlotsItemsUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotsItemsUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotsItemsUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsItemsUI__Class>(type_info(), "", "SaveSlotsItemsUI");
        }
        inline app::SaveSlotsItemsUI* create() {
            return il2cpp::create_object<app::SaveSlotsItemsUI>(get_class());
        }
    } // namespace SaveSlotsItemsUI
} // namespace app::classes::types
