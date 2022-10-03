#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemiesIconsCollection {
        namespace {
            app::EnemiesIconsCollection__Class* type_info_ref = nullptr;
        }
        app::EnemiesIconsCollection__Class** type_info = &type_info_ref;
        inline app::EnemiesIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::EnemiesIconsCollection__Class>(type_info, "Moon", "EnemiesIconsCollection");
        }
        inline app::EnemiesIconsCollection* create() {
            return il2cpp::create_object<app::EnemiesIconsCollection>(get_class());
        }
    } // namespace EnemiesIconsCollection
} // namespace app::classes::types
