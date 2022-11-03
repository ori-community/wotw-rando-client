#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotsManager {
        inline app::SaveSlotsManager__Class** type_info = (app::SaveSlotsManager__Class**)(modloader::win::memory::resolve_rva(0x04760018));
        inline app::SaveSlotsManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsManager__Class>(type_info, "", "SaveSlotsManager");
        }
        inline app::SaveSlotsManager* create() {
            return il2cpp::create_object<app::SaveSlotsManager>(get_class());
        }
    } // namespace SaveSlotsManager
} // namespace app::classes::types
