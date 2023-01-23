#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveSlotBackupUI__Class.h>
#include <Modloader/app/structs/SaveSlotBackupUI.h>

namespace app::classes::types {
    namespace SaveSlotBackupUI {
        namespace {
            inline app::SaveSlotBackupUI__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotBackupUI__Class** type_info = &type_info_ref;
        inline app::SaveSlotBackupUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupUI__Class>(type_info, "", "SaveSlotBackupUI");
        }
        inline app::SaveSlotBackupUI* create() {
            return il2cpp::create_object<app::SaveSlotBackupUI>(get_class());
        }
    } // namespace SaveSlotBackupUI
} // namespace app::classes::types
