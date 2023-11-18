#pragma once
#include <Modloader/app/structs/BombableWallLogic.h>
#include <Modloader/app/structs/BombableWallLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BombableWallLogic {
        inline app::BombableWallLogic__Class** type_info() {
            static app::BombableWallLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BombableWallLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BombableWallLogic__Class* get_class() {
            return il2cpp::get_class<app::BombableWallLogic__Class>(type_info(), "", "BombableWallLogic");
        }
        inline app::BombableWallLogic* create() {
            return il2cpp::create_object<app::BombableWallLogic>(get_class());
        }
    } // namespace BombableWallLogic
} // namespace app::classes::types
