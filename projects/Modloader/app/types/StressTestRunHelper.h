#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTestRunHelper {
        inline app::StressTestRunHelper__Class** type_info = (app::StressTestRunHelper__Class**)(modloader::win::memory::resolve_rva(0x04720348));
        inline app::StressTestRunHelper__Class* get_class() {
            return il2cpp::get_class<app::StressTestRunHelper__Class>(type_info, "", "StressTestRunHelper");
        }
        inline app::StressTestRunHelper* create() {
            return il2cpp::create_object<app::StressTestRunHelper>(get_class());
        }
    } // namespace StressTestRunHelper
} // namespace app::classes::types
