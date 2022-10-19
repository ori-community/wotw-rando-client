#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneSample {
        inline app::SceneSample__Class** type_info = (app::SceneSample__Class**)(modloader::win::memory::resolve_rva(0x047716C8));
        inline app::SceneSample__Class* get_class() {
            return il2cpp::get_class<app::SceneSample__Class>(type_info, "Moon.HierarchyPerformanceTest", "SceneSample");
        }
        inline app::SceneSample* create() {
            return il2cpp::create_object<app::SceneSample>(get_class());
        }
        inline app::SceneSample__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneSample__Array>(get_class(), size);
        }
        inline app::SceneSample__Array* create_array(const std::vector<app::SceneSample*>& items) {
            return il2cpp::array_new<app::SceneSample__Array>(get_class(), items);
        }
    } // namespace SceneSample
} // namespace app::classes::types
