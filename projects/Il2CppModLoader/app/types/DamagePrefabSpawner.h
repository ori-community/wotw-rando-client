#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamagePrefabSpawner {
        namespace {
            app::DamagePrefabSpawner__Class* type_info_ref = nullptr;
        }
        app::DamagePrefabSpawner__Class** type_info = &type_info_ref;
        inline app::DamagePrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::DamagePrefabSpawner__Class>(type_info, "", "DamagePrefabSpawner");
        }
        inline app::DamagePrefabSpawner* create() {
            return il2cpp::create_object<app::DamagePrefabSpawner>(get_class());
        }
    } // namespace DamagePrefabSpawner
} // namespace app::classes::types
