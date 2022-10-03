#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingBoostController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingBoostController__Class** type_info;
        inline app::LoadingBoostController__Class* get_class() {
            return il2cpp::get_class<app::LoadingBoostController__Class>(type_info, "", "LoadingBoostController");
        }
        inline app::LoadingBoostController* create() {
            return il2cpp::create_object<app::LoadingBoostController>(get_class());
        }
    } // namespace LoadingBoostController
} // namespace app::classes::types
