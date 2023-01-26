#pragma once
#include <Modloader/app/structs/DebugGUIText_c.h>
#include <Modloader/app/structs/DebugGUIText_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugGUIText_c {
        inline app::DebugGUIText_c__Class** type_info() {
            static app::DebugGUIText_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugGUIText_c__Class**)(modloader::win::memory::resolve_rva(0x047289D8));
            }
            return cache;
        }
        inline app::DebugGUIText_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugGUIText_c__Class>(type_info(), "", "DebugGUIText", "<>c");
        }
        inline app::DebugGUIText_c* create() {
            return il2cpp::create_object<app::DebugGUIText_c>(get_class());
        }
    } // namespace DebugGUIText_c
} // namespace app::classes::types
