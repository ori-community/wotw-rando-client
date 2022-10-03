#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitReactionController__Class** type_info;
        inline app::HitReactionController__Class* get_class() {
            return il2cpp::get_class<app::HitReactionController__Class>(type_info, "", "HitReactionController");
        }
        inline app::HitReactionController* create() {
            return il2cpp::create_object<app::HitReactionController>(get_class());
        }
    } // namespace HitReactionController
} // namespace app::classes::types
