#pragma once
#include <Modloader/app/structs/BombableSolidWall.h>
#include <Modloader/app/structs/BombableSolidWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BombableSolidWall {
        inline app::BombableSolidWall__Class** type_info() {
            static app::BombableSolidWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BombableSolidWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BombableSolidWall__Class* get_class() {
            return il2cpp::get_class<app::BombableSolidWall__Class>(type_info(), "", "BombableSolidWall");
        }
        inline app::BombableSolidWall* create() {
            return il2cpp::create_object<app::BombableSolidWall>(get_class());
        }
    } // namespace BombableSolidWall
} // namespace app::classes::types
