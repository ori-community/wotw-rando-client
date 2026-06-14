#pragma once
#include <Modloader/app/structs/PlayAnimation.h>
#include <Modloader/app/structs/PlayAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayAnimation {
        inline app::PlayAnimation__Class** type_info() {
            static app::PlayAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimation__Class>(type_info(), "", "PlayAnimation");
        }
        inline app::PlayAnimation* create() {
            return il2cpp::create_object<app::PlayAnimation>(get_class());
        }
    } // namespace PlayAnimation
} // namespace app::classes::types
