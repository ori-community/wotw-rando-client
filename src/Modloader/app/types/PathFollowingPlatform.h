#pragma once
#include <Modloader/app/structs/PathFollowingPlatform.h>
#include <Modloader/app/structs/PathFollowingPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathFollowingPlatform {
        inline app::PathFollowingPlatform__Class** type_info() {
            static app::PathFollowingPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathFollowingPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathFollowingPlatform__Class* get_class() {
            return il2cpp::get_class<app::PathFollowingPlatform__Class>(type_info(), "Moon", "PathFollowingPlatform");
        }
        inline app::PathFollowingPlatform* create() {
            return il2cpp::create_object<app::PathFollowingPlatform>(get_class());
        }
    } // namespace PathFollowingPlatform
} // namespace app::classes::types
