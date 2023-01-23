#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugGUIText_c__Class.h>
#include <Modloader/app/structs/DebugGUIText_c.h>

namespace app::classes::types {
    namespace DebugGUIText_c {
        inline app::DebugGUIText_c__Class** type_info = (app::DebugGUIText_c__Class**)(modloader::win::memory::resolve_rva(0x047289D8));
        inline app::DebugGUIText_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugGUIText_c__Class>(type_info, "", "DebugGUIText", "<>c");
        }
        inline app::DebugGUIText_c* create() {
            return il2cpp::create_object<app::DebugGUIText_c>(get_class());
        }
    } // namespace DebugGUIText_c
} // namespace app::classes::types
