#pragma once
#include <Modloader/app/structs/SaveSlotBackupInfo__Array.h>
#include <Modloader/app/structs/SaveSlotBackupInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupInfo__Array {
        inline app::SaveSlotBackupInfo__Array__Class** type_info() {
            static app::SaveSlotBackupInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSlotBackupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04708890));
            }
            return cache;
        }
        inline app::SaveSlotBackupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupInfo__Array__Class>(type_info(), "", "SaveSlotBackupInfo[]");
        }
        inline app::SaveSlotBackupInfo__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackupInfo__Array>(get_class());
        }
    } // namespace SaveSlotBackupInfo__Array
} // namespace app::classes::types
