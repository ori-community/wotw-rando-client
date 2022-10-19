#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerEnterPrefabSpawner {
        namespace {
            inline app::TriggerEnterPrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::TriggerEnterPrefabSpawner__Class** type_info = &type_info_ref;
        inline app::TriggerEnterPrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::TriggerEnterPrefabSpawner__Class>(type_info, "Moon", "TriggerEnterPrefabSpawner");
        }
        inline app::TriggerEnterPrefabSpawner* create() {
            return il2cpp::create_object<app::TriggerEnterPrefabSpawner>(get_class());
        }
    } // namespace TriggerEnterPrefabSpawner
} // namespace app::classes::types
