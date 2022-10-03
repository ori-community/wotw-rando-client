#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BombableWallLogic {
        namespace {
            app::BombableWallLogic__Class* type_info_ref = nullptr;
        }
        app::BombableWallLogic__Class** type_info = &type_info_ref;
        inline app::BombableWallLogic__Class* get_class() {
            return il2cpp::get_class<app::BombableWallLogic__Class>(type_info, "", "BombableWallLogic");
        }
        inline app::BombableWallLogic* create() {
            return il2cpp::create_object<app::BombableWallLogic>(get_class());
        }
    } // namespace BombableWallLogic
} // namespace app::classes::types
