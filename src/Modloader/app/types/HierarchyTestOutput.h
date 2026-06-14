#pragma once
#include <Modloader/app/structs/HierarchyTestOutput.h>
#include <Modloader/app/structs/HierarchyTestOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestOutput {
        inline app::HierarchyTestOutput__Class** type_info() {
            static app::HierarchyTestOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyTestOutput__Class**)(modloader::win::memory::resolve_rva(0x04785508));
            }
            return cache;
        }
        inline app::HierarchyTestOutput__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestOutput__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTestOutput");
        }
        inline app::HierarchyTestOutput* create() {
            return il2cpp::create_object<app::HierarchyTestOutput>(get_class());
        }
    } // namespace HierarchyTestOutput
} // namespace app::classes::types
