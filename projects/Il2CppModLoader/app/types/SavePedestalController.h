#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SavePedestalController {
        inline app::SavePedestalController__Class** type_info = (app::SavePedestalController__Class**)(modloader::win::memory::resolve_rva(0x047947C8));
        inline app::SavePedestalController__Class* get_class() {
            return il2cpp::get_class<app::SavePedestalController__Class>(type_info, "", "SavePedestalController");
        }
        inline app::SavePedestalController* create() {
            return il2cpp::create_object<app::SavePedestalController>(get_class());
        }
    } // namespace SavePedestalController
} // namespace app::classes::types
