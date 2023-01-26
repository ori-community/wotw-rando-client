#pragma once
#include <Modloader/app/structs/TimeDebugMenuPage_c.h>
#include <Modloader/app/structs/TimeDebugMenuPage_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeDebugMenuPage_c {
        inline app::TimeDebugMenuPage_c__Class** type_info() {
            static app::TimeDebugMenuPage_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x047790D8));
            }
            return cache;
        }
        inline app::TimeDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeDebugMenuPage_c__Class>(type_info(), "", "TimeDebugMenuPage", "<>c");
        }
        inline app::TimeDebugMenuPage_c* create() {
            return il2cpp::create_object<app::TimeDebugMenuPage_c>(get_class());
        }
    } // namespace TimeDebugMenuPage_c
} // namespace app::classes::types
