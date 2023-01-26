#pragma once
#include <Modloader/app/structs/AdvancedDebugMenuPage_c_DisplayClass66_0.h>
#include <Modloader/app/structs/AdvancedDebugMenuPage_c_DisplayClass66_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage_c_DisplayClass66_0 {
        inline app::AdvancedDebugMenuPage_c_DisplayClass66_0__Class** type_info() {
            static app::AdvancedDebugMenuPage_c_DisplayClass66_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AdvancedDebugMenuPage_c_DisplayClass66_0__Class**)(modloader::win::memory::resolve_rva(0x04765470));
            }
            return cache;
        }
        inline app::AdvancedDebugMenuPage_c_DisplayClass66_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AdvancedDebugMenuPage_c_DisplayClass66_0__Class>(type_info(), "", "AdvancedDebugMenuPage", "<>c__DisplayClass66_0");
        }
        inline app::AdvancedDebugMenuPage_c_DisplayClass66_0* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage_c_DisplayClass66_0>(get_class());
        }
    } // namespace AdvancedDebugMenuPage_c_DisplayClass66_0
} // namespace app::classes::types
