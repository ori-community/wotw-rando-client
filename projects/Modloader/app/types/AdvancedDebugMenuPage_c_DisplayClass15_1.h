#pragma once
#include <Modloader/app/structs/AdvancedDebugMenuPage_c_DisplayClass15_1.h>
#include <Modloader/app/structs/AdvancedDebugMenuPage_c_DisplayClass15_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage_c_DisplayClass15_1 {
        inline app::AdvancedDebugMenuPage_c_DisplayClass15_1__Class** type_info() {
            static app::AdvancedDebugMenuPage_c_DisplayClass15_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AdvancedDebugMenuPage_c_DisplayClass15_1__Class**)(modloader::win::memory::resolve_rva(0x0478C1B8));
            }
            return cache;
        }
        inline app::AdvancedDebugMenuPage_c_DisplayClass15_1__Class* get_class() {
            return il2cpp::get_nested_class<app::AdvancedDebugMenuPage_c_DisplayClass15_1__Class>(type_info(), "", "AdvancedDebugMenuPage", "<>c__DisplayClass15_1");
        }
        inline app::AdvancedDebugMenuPage_c_DisplayClass15_1* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage_c_DisplayClass15_1>(get_class());
        }
    } // namespace AdvancedDebugMenuPage_c_DisplayClass15_1
} // namespace app::classes::types
