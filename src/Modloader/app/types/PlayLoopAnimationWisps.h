#pragma once
#include <Modloader/app/structs/PlayLoopAnimationWisps.h>
#include <Modloader/app/structs/PlayLoopAnimationWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayLoopAnimationWisps {
        inline app::PlayLoopAnimationWisps__Class** type_info() {
            static app::PlayLoopAnimationWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayLoopAnimationWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayLoopAnimationWisps__Class* get_class() {
            return il2cpp::get_class<app::PlayLoopAnimationWisps__Class>(type_info(), "", "PlayLoopAnimationWisps");
        }
        inline app::PlayLoopAnimationWisps* create() {
            return il2cpp::create_object<app::PlayLoopAnimationWisps>(get_class());
        }
    } // namespace PlayLoopAnimationWisps
} // namespace app::classes::types
