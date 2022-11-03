#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformanceTestManager_State__Enum {
        inline app::PerformanceTestManager_State__Enum__Class** type_info = (app::PerformanceTestManager_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475E5A8));
        inline app::PerformanceTestManager_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceTestManager_State__Enum__Class>(type_info, "", "PerformanceTestManager", "State");
        }
        inline app::PerformanceTestManager_State__Enum* create() {
            return il2cpp::create_object<app::PerformanceTestManager_State__Enum>(get_class());
        }
    } // namespace PerformanceTestManager_State__Enum
} // namespace app::classes::types
