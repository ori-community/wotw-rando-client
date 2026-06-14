#pragma once
#include <Modloader/app/structs/LoadDebugMenuPage_c_DisplayClass8_0.h>
#include <Modloader/app/structs/LoadDebugMenuPage_c_DisplayClass8_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_c_DisplayClass8_0 {
        inline app::LoadDebugMenuPage_c_DisplayClass8_0__Class** type_info() {
            static app::LoadDebugMenuPage_c_DisplayClass8_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadDebugMenuPage_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0474E760));
            }
            return cache;
        }
        inline app::LoadDebugMenuPage_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadDebugMenuPage_c_DisplayClass8_0__Class>(type_info(), "", "LoadDebugMenuPage", "<>c__DisplayClass8_0");
        }
        inline app::LoadDebugMenuPage_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_c_DisplayClass8_0>(get_class());
        }
    } // namespace LoadDebugMenuPage_c_DisplayClass8_0
} // namespace app::classes::types
