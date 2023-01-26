#pragma once
#include <Modloader/app/structs/GeneralDebugMenuPage_c_DisplayClass60_0.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_c_DisplayClass60_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c_DisplayClass60_0 {
        inline app::GeneralDebugMenuPage_c_DisplayClass60_0__Class** type_info() {
            static app::GeneralDebugMenuPage_c_DisplayClass60_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GeneralDebugMenuPage_c_DisplayClass60_0__Class**)(modloader::win::memory::resolve_rva(0x04704720));
            }
            return cache;
        }
        inline app::GeneralDebugMenuPage_c_DisplayClass60_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c_DisplayClass60_0__Class>(type_info(), "", "GeneralDebugMenuPage", "<>c__DisplayClass60_0");
        }
        inline app::GeneralDebugMenuPage_c_DisplayClass60_0* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c_DisplayClass60_0>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c_DisplayClass60_0
} // namespace app::classes::types
