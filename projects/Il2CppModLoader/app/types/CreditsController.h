#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreditsController {
        inline app::CreditsController__Class** type_info = (app::CreditsController__Class**)(modloader::win::memory::resolve_rva(0x0476B3F8));
        inline app::CreditsController__Class* get_class() {
            return il2cpp::get_class<app::CreditsController__Class>(type_info, "", "CreditsController");
        }
        inline app::CreditsController* create() {
            return il2cpp::create_object<app::CreditsController>(get_class());
        }
    } // namespace CreditsController
} // namespace app::classes::types
