#pragma once
#include <Modloader/app/structs/StickToMovingPlatforms.h>
#include <Modloader/app/structs/StickToMovingPlatforms__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StickToMovingPlatforms {
        inline app::StickToMovingPlatforms__Class** type_info() {
            static app::StickToMovingPlatforms__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StickToMovingPlatforms__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StickToMovingPlatforms__Class* get_class() {
            return il2cpp::get_class<app::StickToMovingPlatforms__Class>(type_info(), "", "StickToMovingPlatforms");
        }
        inline app::StickToMovingPlatforms* create() {
            return il2cpp::create_object<app::StickToMovingPlatforms>(get_class());
        }
    } // namespace StickToMovingPlatforms
} // namespace app::classes::types
