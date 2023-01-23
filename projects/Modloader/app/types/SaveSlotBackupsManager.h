#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveSlotBackupsManager__Class.h>
#include <Modloader/app/structs/SaveSlotBackupsManager.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager {
        inline app::SaveSlotBackupsManager__Class** type_info = (app::SaveSlotBackupsManager__Class**)(modloader::win::memory::resolve_rva(0x04765228));
        inline app::SaveSlotBackupsManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupsManager__Class>(type_info, "", "SaveSlotBackupsManager");
        }
        inline app::SaveSlotBackupsManager* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager>(get_class());
        }
    } // namespace SaveSlotBackupsManager
} // namespace app::classes::types
