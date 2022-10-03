#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossLocomotion__Class** type_info;
        inline app::SpiderBossLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotion__Class>(type_info, "", "SpiderBossLocomotion");
        }
        inline app::SpiderBossLocomotion* create() {
            return il2cpp::create_object<app::SpiderBossLocomotion>(get_class());
        }
    } // namespace SpiderBossLocomotion
} // namespace app::classes::types
