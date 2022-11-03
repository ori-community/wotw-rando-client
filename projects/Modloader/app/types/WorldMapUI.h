#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldMapUI {
        inline app::WorldMapUI__Class** type_info = (app::WorldMapUI__Class**)(modloader::win::memory::resolve_rva(0x0476E7D0));
        inline app::WorldMapUI__Class* get_class() {
            return il2cpp::get_class<app::WorldMapUI__Class>(type_info, "", "WorldMapUI");
        }
        inline app::WorldMapUI* create() {
            return il2cpp::create_object<app::WorldMapUI>(get_class());
        }
    } // namespace WorldMapUI
} // namespace app::classes::types
