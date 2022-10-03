#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RigidbodyInteractionController__Class** type_info;
        inline app::RigidbodyInteractionController__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInteractionController__Class>(type_info, "", "RigidbodyInteractionController");
        }
        inline app::RigidbodyInteractionController* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController>(get_class());
        }
    } // namespace RigidbodyInteractionController
} // namespace app::classes::types
