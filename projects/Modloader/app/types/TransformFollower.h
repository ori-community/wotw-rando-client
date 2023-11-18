#pragma once
#include <Modloader/app/structs/TransformFollower.h>
#include <Modloader/app/structs/TransformFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformFollower {
        inline app::TransformFollower__Class** type_info() {
            static app::TransformFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformFollower__Class* get_class() {
            return il2cpp::get_class<app::TransformFollower__Class>(type_info(), "", "TransformFollower");
        }
        inline app::TransformFollower* create() {
            return il2cpp::create_object<app::TransformFollower>(get_class());
        }
    } // namespace TransformFollower
} // namespace app::classes::types
