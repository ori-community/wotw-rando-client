#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractablePrefabSpawner {
        namespace {
            inline app::InteractablePrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::InteractablePrefabSpawner__Class** type_info = &type_info_ref;
        inline app::InteractablePrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::InteractablePrefabSpawner__Class>(type_info, "Moon", "InteractablePrefabSpawner");
        }
        inline app::InteractablePrefabSpawner* create() {
            return il2cpp::create_object<app::InteractablePrefabSpawner>(get_class());
        }
    } // namespace InteractablePrefabSpawner
} // namespace app::classes::types
