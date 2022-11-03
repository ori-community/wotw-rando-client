#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage {
        inline app::AdvancedDebugMenuPage__Class** type_info = (app::AdvancedDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0478D7D0));
        inline app::AdvancedDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::AdvancedDebugMenuPage__Class>(type_info, "", "AdvancedDebugMenuPage");
        }
        inline app::AdvancedDebugMenuPage* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage>(get_class());
        }
    } // namespace AdvancedDebugMenuPage
} // namespace app::classes::types
