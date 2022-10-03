#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleCameraSampler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleCameraSampler_c__Class** type_info;
        inline app::SimpleCameraSampler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCameraSampler_c__Class>(type_info, "Moon.HierarchyPerformanceTest", "SimpleCameraSampler", "<>c");
        }
        inline app::SimpleCameraSampler_c* create() {
            return il2cpp::create_object<app::SimpleCameraSampler_c>(get_class());
        }
    } // namespace SimpleCameraSampler_c
} // namespace app::classes::types
