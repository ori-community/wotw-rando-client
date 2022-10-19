#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamagePrefabSpawner {
        namespace {
            inline app::DamagePrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::DamagePrefabSpawner__Class** type_info = &type_info_ref;
        inline app::DamagePrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::DamagePrefabSpawner__Class>(type_info, "", "DamagePrefabSpawner");
        }
        inline app::DamagePrefabSpawner* create() {
            return il2cpp::create_object<app::DamagePrefabSpawner>(get_class());
        }
    } // namespace DamagePrefabSpawner
} // namespace app::classes::types
