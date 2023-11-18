#pragma once
#include <Modloader/app/structs/InteractablePrefabSpawner.h>
#include <Modloader/app/structs/InteractablePrefabSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractablePrefabSpawner {
        inline app::InteractablePrefabSpawner__Class** type_info() {
            static app::InteractablePrefabSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractablePrefabSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractablePrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::InteractablePrefabSpawner__Class>(type_info(), "Moon", "InteractablePrefabSpawner");
        }
        inline app::InteractablePrefabSpawner* create() {
            return il2cpp::create_object<app::InteractablePrefabSpawner>(get_class());
        }
    } // namespace InteractablePrefabSpawner
} // namespace app::classes::types
