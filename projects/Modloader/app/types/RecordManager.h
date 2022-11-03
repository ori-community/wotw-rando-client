#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordManager {
        inline app::RecordManager__Class** type_info = (app::RecordManager__Class**)(modloader::win::memory::resolve_rva(0x04723230));
        inline app::RecordManager__Class* get_class() {
            return il2cpp::get_class<app::RecordManager__Class>(type_info, "System.Data", "RecordManager");
        }
        inline app::RecordManager* create() {
            return il2cpp::create_object<app::RecordManager>(get_class());
        }
    } // namespace RecordManager
} // namespace app::classes::types
