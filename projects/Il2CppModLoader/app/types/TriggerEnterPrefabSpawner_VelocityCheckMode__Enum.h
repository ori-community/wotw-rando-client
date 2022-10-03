#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerEnterPrefabSpawner_VelocityCheckMode__Enum {
        namespace {
            app::TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Class** type_info = &type_info_ref;
        inline app::TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Class>(type_info, "Moon", "TriggerEnterPrefabSpawner", "VelocityCheckMode");
        }
        inline app::TriggerEnterPrefabSpawner_VelocityCheckMode__Enum* create() {
            return il2cpp::create_object<app::TriggerEnterPrefabSpawner_VelocityCheckMode__Enum>(get_class());
        }
    } // namespace TriggerEnterPrefabSpawner_VelocityCheckMode__Enum
} // namespace app::classes::types
