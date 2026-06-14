#pragma once
#include <Modloader/app/structs/BackupSaveCleverMenuItem.h>
#include <Modloader/app/structs/BackupSaveCleverMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItem {
        inline app::BackupSaveCleverMenuItem__Class** type_info() {
            static app::BackupSaveCleverMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BackupSaveCleverMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0475A140));
            }
            return cache;
        }
        inline app::BackupSaveCleverMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveCleverMenuItem__Class>(type_info(), "", "BackupSaveCleverMenuItem");
        }
        inline app::BackupSaveCleverMenuItem* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItem>(get_class());
        }
    } // namespace BackupSaveCleverMenuItem
} // namespace app::classes::types
