#pragma once
#include <Modloader/app/structs/CatAndMouseRoomShadow.h>
#include <Modloader/app/structs/CatAndMouseRoomShadow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomShadow {
        inline app::CatAndMouseRoomShadow__Class** type_info() {
            static app::CatAndMouseRoomShadow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseRoomShadow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseRoomShadow__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomShadow__Class>(type_info(), "", "CatAndMouseRoomShadow");
        }
        inline app::CatAndMouseRoomShadow* create() {
            return il2cpp::create_object<app::CatAndMouseRoomShadow>(get_class());
        }
    } // namespace CatAndMouseRoomShadow
} // namespace app::classes::types
