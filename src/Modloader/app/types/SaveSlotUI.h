#pragma once
#include <Modloader/app/structs/SaveSlotUI.h>
#include <Modloader/app/structs/SaveSlotUI__Array.h>
#include <Modloader/app/structs/SaveSlotUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotUI {
        inline app::SaveSlotUI__Class** type_info() {
            static app::SaveSlotUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotUI__Class>(type_info(), "", "SaveSlotUI");
        }
        inline app::SaveSlotUI* create() {
            return il2cpp::create_object<app::SaveSlotUI>(get_class());
        }
        inline app::SaveSlotUI__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotUI__Array>(get_class(), size);
        }
        inline app::SaveSlotUI__Array* create_array(const std::vector<app::SaveSlotUI*>& items) {
            return il2cpp::array_new<app::SaveSlotUI__Array>(get_class(), items);
        }
    } // namespace SaveSlotUI
} // namespace app::classes::types
