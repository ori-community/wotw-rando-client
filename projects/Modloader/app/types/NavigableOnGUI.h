#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NavigableOnGUI__Class.h>
#include <Modloader/app/structs/NavigableOnGUI.h>

namespace app::classes::types {
    namespace NavigableOnGUI {
        inline app::NavigableOnGUI__Class** type_info = (app::NavigableOnGUI__Class**)(modloader::win::memory::resolve_rva(0x04786E48));
        inline app::NavigableOnGUI__Class* get_class() {
            return il2cpp::get_class<app::NavigableOnGUI__Class>(type_info, "Moon.UberStateVisualization", "NavigableOnGUI");
        }
        inline app::NavigableOnGUI* create() {
            return il2cpp::create_object<app::NavigableOnGUI>(get_class());
        }
    } // namespace NavigableOnGUI
} // namespace app::classes::types
