#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreditsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreditsController__Class** type_info;
        inline app::CreditsController__Class* get_class() {
            return il2cpp::get_class<app::CreditsController__Class>(type_info, "", "CreditsController");
        }
        inline app::CreditsController* create() {
            return il2cpp::create_object<app::CreditsController>(get_class());
        }
    } // namespace CreditsController
} // namespace app::classes::types
