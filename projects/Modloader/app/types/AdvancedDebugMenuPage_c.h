#pragma once
#include <Modloader/app/structs/AdvancedDebugMenuPage_c.h>
#include <Modloader/app/structs/AdvancedDebugMenuPage_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage_c {
        inline app::AdvancedDebugMenuPage_c__Class** type_info() {
            static app::AdvancedDebugMenuPage_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AdvancedDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x04730480));
            }
            return cache;
        }
        inline app::AdvancedDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AdvancedDebugMenuPage_c__Class>(type_info(), "", "AdvancedDebugMenuPage", "<>c");
        }
        inline app::AdvancedDebugMenuPage_c* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage_c>(get_class());
        }
    } // namespace AdvancedDebugMenuPage_c
} // namespace app::classes::types
