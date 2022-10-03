#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnPrefabOnAccelerationChange {
        namespace {
            app::SpawnPrefabOnAccelerationChange__Class* type_info_ref = nullptr;
        }
        app::SpawnPrefabOnAccelerationChange__Class** type_info = &type_info_ref;
        inline app::SpawnPrefabOnAccelerationChange__Class* get_class() {
            return il2cpp::get_class<app::SpawnPrefabOnAccelerationChange__Class>(type_info, "", "SpawnPrefabOnAccelerationChange");
        }
        inline app::SpawnPrefabOnAccelerationChange* create() {
            return il2cpp::create_object<app::SpawnPrefabOnAccelerationChange>(get_class());
        }
    } // namespace SpawnPrefabOnAccelerationChange
} // namespace app::classes::types
