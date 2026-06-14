#pragma once
#include <Modloader/app/structs/TriggerEnterPrefabSpawner.h>
#include <Modloader/app/structs/TriggerEnterPrefabSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerEnterPrefabSpawner {
        inline app::TriggerEnterPrefabSpawner__Class** type_info() {
            static app::TriggerEnterPrefabSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerEnterPrefabSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerEnterPrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::TriggerEnterPrefabSpawner__Class>(type_info(), "Moon", "TriggerEnterPrefabSpawner");
        }
        inline app::TriggerEnterPrefabSpawner* create() {
            return il2cpp::create_object<app::TriggerEnterPrefabSpawner>(get_class());
        }
    } // namespace TriggerEnterPrefabSpawner
} // namespace app::classes::types
