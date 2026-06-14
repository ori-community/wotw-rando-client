#pragma once
#include <Modloader/app/structs/SmoothTransformFollower.h>
#include <Modloader/app/structs/SmoothTransformFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothTransformFollower {
        inline app::SmoothTransformFollower__Class** type_info() {
            static app::SmoothTransformFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothTransformFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothTransformFollower__Class* get_class() {
            return il2cpp::get_class<app::SmoothTransformFollower__Class>(type_info(), "", "SmoothTransformFollower");
        }
        inline app::SmoothTransformFollower* create() {
            return il2cpp::create_object<app::SmoothTransformFollower>(get_class());
        }
    } // namespace SmoothTransformFollower
} // namespace app::classes::types
