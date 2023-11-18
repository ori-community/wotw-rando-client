#pragma once
#include <Modloader/app/structs/SaveSlotBackupUI.h>
#include <Modloader/app/structs/SaveSlotBackupUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupUI {
        inline app::SaveSlotBackupUI__Class** type_info() {
            static app::SaveSlotBackupUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotBackupUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotBackupUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupUI__Class>(type_info(), "", "SaveSlotBackupUI");
        }
        inline app::SaveSlotBackupUI* create() {
            return il2cpp::create_object<app::SaveSlotBackupUI>(get_class());
        }
    } // namespace SaveSlotBackupUI
} // namespace app::classes::types
