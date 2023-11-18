#pragma once
#include <Modloader/app/structs/HPerfTestResult__Array.h>
#include <Modloader/app/structs/HPerfTestResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HPerfTestResult__Array {
        inline app::HPerfTestResult__Array__Class** type_info() {
            static app::HPerfTestResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HPerfTestResult__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FF38));
            }
            return cache;
        }
        inline app::HPerfTestResult__Array__Class* get_class() {
            return il2cpp::get_class<app::HPerfTestResult__Array__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HPerfTestResult[]");
        }
        inline app::HPerfTestResult__Array* create() {
            return il2cpp::create_object<app::HPerfTestResult__Array>(get_class());
        }
    } // namespace HPerfTestResult__Array
} // namespace app::classes::types
