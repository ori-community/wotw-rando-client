#pragma once
#include <Modloader/app/structs/BombableSolidWallEntity.h>
#include <Modloader/app/structs/BombableSolidWallEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BombableSolidWallEntity {
        inline app::BombableSolidWallEntity__Class** type_info() {
            static app::BombableSolidWallEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BombableSolidWallEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BombableSolidWallEntity__Class* get_class() {
            return il2cpp::get_class<app::BombableSolidWallEntity__Class>(type_info(), "", "BombableSolidWallEntity");
        }
        inline app::BombableSolidWallEntity* create() {
            return il2cpp::create_object<app::BombableSolidWallEntity>(get_class());
        }
    } // namespace BombableSolidWallEntity
} // namespace app::classes::types
