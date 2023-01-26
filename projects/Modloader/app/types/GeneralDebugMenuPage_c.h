#pragma once
#include <Modloader/app/structs/GeneralDebugMenuPage_c.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c {
        inline app::GeneralDebugMenuPage_c__Class** type_info() {
            static app::GeneralDebugMenuPage_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GeneralDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x04755728));
            }
            return cache;
        }
        inline app::GeneralDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c__Class>(type_info(), "", "GeneralDebugMenuPage", "<>c");
        }
        inline app::GeneralDebugMenuPage_c* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c
} // namespace app::classes::types
