#pragma once
#include <Modloader/app/structs/TransparentWallB.h>
#include <Modloader/app/structs/TransparentWallB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparentWallB {
        inline app::TransparentWallB__Class** type_info() {
            static app::TransparentWallB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparentWallB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparentWallB__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallB__Class>(type_info(), "", "TransparentWallB");
        }
        inline app::TransparentWallB* create() {
            return il2cpp::create_object<app::TransparentWallB>(get_class());
        }
    } // namespace TransparentWallB
} // namespace app::classes::types
