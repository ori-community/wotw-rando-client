#pragma once
#include <Modloader/app/structs/SaveSlotBackupsManager_c.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_c {
        inline app::SaveSlotBackupsManager_c__Class** type_info() {
            static app::SaveSlotBackupsManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSlotBackupsManager_c__Class**)(modloader::win::memory::resolve_rva(0x047070F8));
            }
            return cache;
        }
        inline app::SaveSlotBackupsManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotBackupsManager_c__Class>(type_info(), "", "SaveSlotBackupsManager", "<>c");
        }
        inline app::SaveSlotBackupsManager_c* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager_c>(get_class());
        }
    } // namespace SaveSlotBackupsManager_c
} // namespace app::classes::types
