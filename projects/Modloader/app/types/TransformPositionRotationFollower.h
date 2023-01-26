#pragma once
#include <Modloader/app/structs/TransformPositionRotationFollower.h>
#include <Modloader/app/structs/TransformPositionRotationFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformPositionRotationFollower {
        inline app::TransformPositionRotationFollower__Class** type_info() {
            static app::TransformPositionRotationFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformPositionRotationFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformPositionRotationFollower__Class* get_class() {
            return il2cpp::get_class<app::TransformPositionRotationFollower__Class>(type_info(), "", "TransformPositionRotationFollower");
        }
        inline app::TransformPositionRotationFollower* create() {
            return il2cpp::create_object<app::TransformPositionRotationFollower>(get_class());
        }
    } // namespace TransformPositionRotationFollower
} // namespace app::classes::types
