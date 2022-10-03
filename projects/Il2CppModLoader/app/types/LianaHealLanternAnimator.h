#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LianaHealLanternAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LianaHealLanternAnimator__Class** type_info;
        inline app::LianaHealLanternAnimator__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternAnimator__Class>(type_info, "", "LianaHealLanternAnimator");
        }
        inline app::LianaHealLanternAnimator* create() {
            return il2cpp::create_object<app::LianaHealLanternAnimator>(get_class());
        }
    } // namespace LianaHealLanternAnimator
} // namespace app::classes::types
