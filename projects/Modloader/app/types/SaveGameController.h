#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveGameController {
        inline app::SaveGameController__Class** type_info = (app::SaveGameController__Class**)(modloader::win::memory::resolve_rva(0x0472C390));
        inline app::SaveGameController__Class* get_class() {
            return il2cpp::get_class<app::SaveGameController__Class>(type_info, "", "SaveGameController");
        }
        inline app::SaveGameController* create() {
            return il2cpp::create_object<app::SaveGameController>(get_class());
        }
    } // namespace SaveGameController
} // namespace app::classes::types
