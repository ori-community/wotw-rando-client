#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HPerfTestResult {
        inline app::HPerfTestResult__Class** type_info = (app::HPerfTestResult__Class**)(modloader::win::memory::resolve_rva(0x04758A78));
        inline app::HPerfTestResult__Class* get_class() {
            return il2cpp::get_class<app::HPerfTestResult__Class>(type_info, "Moon.HierarchyPerformanceTest", "HPerfTestResult");
        }
        inline app::HPerfTestResult* create() {
            return il2cpp::create_object<app::HPerfTestResult>(get_class());
        }
        inline app::HPerfTestResult__Array* create_array(int size) {
            return il2cpp::array_new<app::HPerfTestResult__Array>(get_class(), size);
        }
        inline app::HPerfTestResult__Array* create_array(const std::vector<app::HPerfTestResult*>& items) {
            return il2cpp::array_new<app::HPerfTestResult__Array>(get_class(), items);
        }
    } // namespace HPerfTestResult
} // namespace app::classes::types
