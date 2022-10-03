#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomShadow {
        namespace {
            app::CatAndMouseRoomShadow__Class* type_info_ref = nullptr;
        }
        app::CatAndMouseRoomShadow__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomShadow__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomShadow__Class>(type_info, "", "CatAndMouseRoomShadow");
        }
        inline app::CatAndMouseRoomShadow* create() {
            return il2cpp::create_object<app::CatAndMouseRoomShadow>(get_class());
        }
    } // namespace CatAndMouseRoomShadow
} // namespace app::classes::types
