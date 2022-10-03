#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleCameraSampler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleCameraSampler__Class** type_info;
        inline app::SimpleCameraSampler__Class* get_class() {
            return il2cpp::get_class<app::SimpleCameraSampler__Class>(type_info, "Moon.HierarchyPerformanceTest", "SimpleCameraSampler");
        }
        inline app::SimpleCameraSampler* create() {
            return il2cpp::create_object<app::SimpleCameraSampler>(get_class());
        }
    } // namespace SimpleCameraSampler
} // namespace app::classes::types
