#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateController__Class** type_info;
        inline app::UberStateController__Class* get_class() {
            return il2cpp::get_class<app::UberStateController__Class>(type_info, "Moon", "UberStateController");
        }
        inline app::UberStateController* create() {
            return il2cpp::create_object<app::UberStateController>(get_class());
        }
    } // namespace UberStateController
} // namespace app::classes::types
