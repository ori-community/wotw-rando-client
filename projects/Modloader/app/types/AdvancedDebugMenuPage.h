#pragma once
#include <Modloader/app/structs/AdvancedDebugMenuPage.h>
#include <Modloader/app/structs/AdvancedDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage {
        inline app::AdvancedDebugMenuPage__Class** type_info() {
            static app::AdvancedDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AdvancedDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0478D7D0));
            }
            return cache;
        }
        inline app::AdvancedDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::AdvancedDebugMenuPage__Class>(type_info(), "", "AdvancedDebugMenuPage");
        }
        inline app::AdvancedDebugMenuPage* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage>(get_class());
        }
    } // namespace AdvancedDebugMenuPage
} // namespace app::classes::types
