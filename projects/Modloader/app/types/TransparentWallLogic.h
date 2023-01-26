#pragma once
#include <Modloader/app/structs/TransparentWallLogic.h>
#include <Modloader/app/structs/TransparentWallLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparentWallLogic {
        inline app::TransparentWallLogic__Class** type_info() {
            static app::TransparentWallLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparentWallLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparentWallLogic__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallLogic__Class>(type_info(), "", "TransparentWallLogic");
        }
        inline app::TransparentWallLogic* create() {
            return il2cpp::create_object<app::TransparentWallLogic>(get_class());
        }
    } // namespace TransparentWallLogic
} // namespace app::classes::types
