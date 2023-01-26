#pragma once
#include <Modloader/app/structs/SpawnPrefabOnAccelerationChange.h>
#include <Modloader/app/structs/SpawnPrefabOnAccelerationChange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnPrefabOnAccelerationChange {
        inline app::SpawnPrefabOnAccelerationChange__Class** type_info() {
            static app::SpawnPrefabOnAccelerationChange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnPrefabOnAccelerationChange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnPrefabOnAccelerationChange__Class* get_class() {
            return il2cpp::get_class<app::SpawnPrefabOnAccelerationChange__Class>(type_info(), "", "SpawnPrefabOnAccelerationChange");
        }
        inline app::SpawnPrefabOnAccelerationChange* create() {
            return il2cpp::create_object<app::SpawnPrefabOnAccelerationChange>(get_class());
        }
    } // namespace SpawnPrefabOnAccelerationChange
} // namespace app::classes::types
