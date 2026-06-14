#pragma once
#include <Modloader/app/structs/PlayLoopAnimation.h>
#include <Modloader/app/structs/PlayLoopAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayLoopAnimation {
        inline app::PlayLoopAnimation__Class** type_info() {
            static app::PlayLoopAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayLoopAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayLoopAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayLoopAnimation__Class>(type_info(), "", "PlayLoopAnimation");
        }
        inline app::PlayLoopAnimation* create() {
            return il2cpp::create_object<app::PlayLoopAnimation>(get_class());
        }
    } // namespace PlayLoopAnimation
} // namespace app::classes::types
