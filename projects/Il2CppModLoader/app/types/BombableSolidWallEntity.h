#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BombableSolidWallEntity {
        namespace {
            app::BombableSolidWallEntity__Class* type_info_ref = nullptr;
        }
        app::BombableSolidWallEntity__Class** type_info = &type_info_ref;
        inline app::BombableSolidWallEntity__Class* get_class() {
            return il2cpp::get_class<app::BombableSolidWallEntity__Class>(type_info, "", "BombableSolidWallEntity");
        }
        inline app::BombableSolidWallEntity* create() {
            return il2cpp::create_object<app::BombableSolidWallEntity>(get_class());
        }
    } // namespace BombableSolidWallEntity
} // namespace app::classes::types
