#pragma once
#include <Modloader/app/structs/AnimationWarping.h>
#include <Modloader/app/structs/AnimationWarping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationWarping {
        inline app::AnimationWarping__Class** type_info() {
            static app::AnimationWarping__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationWarping__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationWarping__Class* get_class() {
            return il2cpp::get_class<app::AnimationWarping__Class>(type_info(), "RootMotion.Demos", "AnimationWarping");
        }
        inline app::AnimationWarping* create() {
            return il2cpp::create_object<app::AnimationWarping>(get_class());
        }
    } // namespace AnimationWarping
} // namespace app::classes::types
