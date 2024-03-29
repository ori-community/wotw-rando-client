#pragma once
#include <Modloader/app/structs/EnemiesIconsCollection.h>
#include <Modloader/app/structs/EnemiesIconsCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemiesIconsCollection {
        inline app::EnemiesIconsCollection__Class** type_info() {
            static app::EnemiesIconsCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemiesIconsCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemiesIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::EnemiesIconsCollection__Class>(type_info(), "Moon", "EnemiesIconsCollection");
        }
        inline app::EnemiesIconsCollection* create() {
            return il2cpp::create_object<app::EnemiesIconsCollection>(get_class());
        }
    } // namespace EnemiesIconsCollection
} // namespace app::classes::types
