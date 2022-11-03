#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotBackupInfo__Array {
        inline app::SaveSlotBackupInfo__Array__Class** type_info = (app::SaveSlotBackupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04708890));
        inline app::SaveSlotBackupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupInfo__Array__Class>(type_info, "", "SaveSlotBackupInfo[]");
        }
        inline app::SaveSlotBackupInfo__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackupInfo__Array>(get_class());
        }
    } // namespace SaveSlotBackupInfo__Array
} // namespace app::classes::types
