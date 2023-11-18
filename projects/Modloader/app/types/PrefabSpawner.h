#pragma once
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/PrefabSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrefabSpawner {
        inline app::PrefabSpawner__Class** type_info() {
            static app::PrefabSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrefabSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::PrefabSpawner__Class>(type_info(), "", "PrefabSpawner");
        }
        inline app::PrefabSpawner* create() {
            return il2cpp::create_object<app::PrefabSpawner>(get_class());
        }
    } // namespace PrefabSpawner
} // namespace app::classes::types
