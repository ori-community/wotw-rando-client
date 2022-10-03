#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LianaHealLanternVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LianaHealLanternVisuals__Class** type_info;
        inline app::LianaHealLanternVisuals__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternVisuals__Class>(type_info, "", "LianaHealLanternVisuals");
        }
        inline app::LianaHealLanternVisuals* create() {
            return il2cpp::create_object<app::LianaHealLanternVisuals>(get_class());
        }
    } // namespace LianaHealLanternVisuals
} // namespace app::classes::types
