#pragma once
#include <Modloader/app/structs/BreakableWallLogic.h>
#include <Modloader/app/structs/BreakableWallLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakableWallLogic {
        inline app::BreakableWallLogic__Class** type_info() {
            static app::BreakableWallLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakableWallLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakableWallLogic__Class* get_class() {
            return il2cpp::get_class<app::BreakableWallLogic__Class>(type_info(), "", "BreakableWallLogic");
        }
        inline app::BreakableWallLogic* create() {
            return il2cpp::create_object<app::BreakableWallLogic>(get_class());
        }
    } // namespace BreakableWallLogic
} // namespace app::classes::types
