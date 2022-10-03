#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyDatabase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossSceneDependencyDatabase__Class** type_info;
        inline app::CrossSceneDependencyDatabase__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyDatabase__Class>(type_info, "Moon", "CrossSceneDependencyDatabase");
        }
        inline app::CrossSceneDependencyDatabase* create() {
            return il2cpp::create_object<app::CrossSceneDependencyDatabase>(get_class());
        }
    } // namespace CrossSceneDependencyDatabase
} // namespace app::classes::types
