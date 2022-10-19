#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleCameraSampler_c {
        inline app::SimpleCameraSampler_c__Class** type_info = (app::SimpleCameraSampler_c__Class**)(modloader::win::memory::resolve_rva(0x04777828));
        inline app::SimpleCameraSampler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCameraSampler_c__Class>(type_info, "Moon.HierarchyPerformanceTest", "SimpleCameraSampler", "<>c");
        }
        inline app::SimpleCameraSampler_c* create() {
            return il2cpp::create_object<app::SimpleCameraSampler_c>(get_class());
        }
    } // namespace SimpleCameraSampler_c
} // namespace app::classes::types
