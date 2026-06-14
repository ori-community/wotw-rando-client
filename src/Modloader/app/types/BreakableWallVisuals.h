#pragma once
#include <Modloader/app/structs/BreakableWallVisuals.h>
#include <Modloader/app/structs/BreakableWallVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakableWallVisuals {
        inline app::BreakableWallVisuals__Class** type_info() {
            static app::BreakableWallVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakableWallVisuals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakableWallVisuals__Class* get_class() {
            return il2cpp::get_class<app::BreakableWallVisuals__Class>(type_info(), "", "BreakableWallVisuals");
        }
        inline app::BreakableWallVisuals* create() {
            return il2cpp::create_object<app::BreakableWallVisuals>(get_class());
        }
    } // namespace BreakableWallVisuals
} // namespace app::classes::types
