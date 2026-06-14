#pragma once
#include <Modloader/app/structs/MapStonesDebugMenuItem.h>
#include <Modloader/app/structs/MapStonesDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapStonesDebugMenuItem {
        inline app::MapStonesDebugMenuItem__Class** type_info() {
            static app::MapStonesDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MapStonesDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04774540));
            }
            return cache;
        }
        inline app::MapStonesDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::MapStonesDebugMenuItem__Class>(type_info(), "", "MapStonesDebugMenuItem");
        }
        inline app::MapStonesDebugMenuItem* create() {
            return il2cpp::create_object<app::MapStonesDebugMenuItem>(get_class());
        }
    } // namespace MapStonesDebugMenuItem
} // namespace app::classes::types
