#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashableSwitchAnimator__Class** type_info;
        inline app::DashableSwitchAnimator__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchAnimator__Class>(type_info, "", "DashableSwitchAnimator");
        }
        inline app::DashableSwitchAnimator* create() {
            return il2cpp::create_object<app::DashableSwitchAnimator>(get_class());
        }
    } // namespace DashableSwitchAnimator
} // namespace app::classes::types
