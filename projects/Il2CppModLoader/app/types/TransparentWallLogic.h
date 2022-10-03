#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparentWallLogic {
        namespace {
            app::TransparentWallLogic__Class* type_info_ref = nullptr;
        }
        app::TransparentWallLogic__Class** type_info = &type_info_ref;
        inline app::TransparentWallLogic__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallLogic__Class>(type_info, "", "TransparentWallLogic");
        }
        inline app::TransparentWallLogic* create() {
            return il2cpp::create_object<app::TransparentWallLogic>(get_class());
        }
    } // namespace TransparentWallLogic
} // namespace app::classes::types
