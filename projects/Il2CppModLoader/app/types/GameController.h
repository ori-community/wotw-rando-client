#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController {
        inline app::GameController__Class** type_info = (app::GameController__Class**)(modloader::win::memory::resolve_rva(0x047015F8));
        inline app::GameController__Class* get_class() {
            return il2cpp::get_class<app::GameController__Class>(type_info, "", "GameController");
        }
        inline app::GameController* create() {
            return il2cpp::create_object<app::GameController>(get_class());
        }
    } // namespace GameController
} // namespace app::classes::types
