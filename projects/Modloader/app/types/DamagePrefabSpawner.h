#pragma once
#include <Modloader/app/structs/DamagePrefabSpawner.h>
#include <Modloader/app/structs/DamagePrefabSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamagePrefabSpawner {
        inline app::DamagePrefabSpawner__Class** type_info() {
            static app::DamagePrefabSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamagePrefabSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamagePrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::DamagePrefabSpawner__Class>(type_info(), "", "DamagePrefabSpawner");
        }
        inline app::DamagePrefabSpawner* create() {
            return il2cpp::create_object<app::DamagePrefabSpawner>(get_class());
        }
    } // namespace DamagePrefabSpawner
} // namespace app::classes::types
