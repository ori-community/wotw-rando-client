#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage_c_DisplayClass65_0 {
        inline app::AdvancedDebugMenuPage_c_DisplayClass65_0__Class** type_info = (app::AdvancedDebugMenuPage_c_DisplayClass65_0__Class**)(modloader::win::memory::resolve_rva(0x047886B8));
        inline app::AdvancedDebugMenuPage_c_DisplayClass65_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AdvancedDebugMenuPage_c_DisplayClass65_0__Class>(type_info, "", "AdvancedDebugMenuPage", "<>c__DisplayClass65_0");
        }
        inline app::AdvancedDebugMenuPage_c_DisplayClass65_0* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage_c_DisplayClass65_0>(get_class());
        }
    } // namespace AdvancedDebugMenuPage_c_DisplayClass65_0
} // namespace app::classes::types
