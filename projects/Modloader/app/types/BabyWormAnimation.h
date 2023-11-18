#pragma once
#include <Modloader/app/structs/BabyWormAnimation.h>
#include <Modloader/app/structs/BabyWormAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWormAnimation {
        inline app::BabyWormAnimation__Class** type_info() {
            static app::BabyWormAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyWormAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyWormAnimation__Class* get_class() {
            return il2cpp::get_class<app::BabyWormAnimation__Class>(type_info(), "", "BabyWormAnimation");
        }
        inline app::BabyWormAnimation* create() {
            return il2cpp::create_object<app::BabyWormAnimation>(get_class());
        }
    } // namespace BabyWormAnimation
} // namespace app::classes::types
