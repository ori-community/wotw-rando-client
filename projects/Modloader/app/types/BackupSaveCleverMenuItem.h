#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItem {
        inline app::BackupSaveCleverMenuItem__Class** type_info = (app::BackupSaveCleverMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0475A140));
        inline app::BackupSaveCleverMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveCleverMenuItem__Class>(type_info, "", "BackupSaveCleverMenuItem");
        }
        inline app::BackupSaveCleverMenuItem* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItem>(get_class());
        }
    } // namespace BackupSaveCleverMenuItem
} // namespace app::classes::types
