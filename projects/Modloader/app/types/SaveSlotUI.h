#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotUI {
        namespace {
            inline app::SaveSlotUI__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotUI__Class** type_info = &type_info_ref;
        inline app::SaveSlotUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotUI__Class>(type_info, "", "SaveSlotUI");
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
