#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootingSpider_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShootingSpider_States__Class** type_info;
        inline app::ShootingSpider_States__Class* get_class() {
            return il2cpp::get_nested_class<app::ShootingSpider_States__Class>(type_info, "", "ShootingSpider", "States");
        }
        inline app::ShootingSpider_States* create() {
            return il2cpp::create_object<app::ShootingSpider_States>(get_class());
        }
    } // namespace ShootingSpider_States
} // namespace app::classes::types
