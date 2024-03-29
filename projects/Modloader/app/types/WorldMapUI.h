#pragma once
#include <Modloader/app/structs/WorldMapUI.h>
#include <Modloader/app/structs/WorldMapUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapUI {
        inline app::WorldMapUI__Class** type_info() {
            static app::WorldMapUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldMapUI__Class**)(modloader::win::memory::resolve_rva(0x0476E7D0));
            }
            return cache;
        }
        inline app::WorldMapUI__Class* get_class() {
            return il2cpp::get_class<app::WorldMapUI__Class>(type_info(), "", "WorldMapUI");
        }
        inline app::WorldMapUI* create() {
            return il2cpp::create_object<app::WorldMapUI>(get_class());
        }
    } // namespace WorldMapUI
} // namespace app::classes::types
