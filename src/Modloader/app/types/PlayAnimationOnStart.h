#pragma once
#include <Modloader/app/structs/PlayAnimationOnStart.h>
#include <Modloader/app/structs/PlayAnimationOnStart__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayAnimationOnStart {
        inline app::PlayAnimationOnStart__Class** type_info() {
            static app::PlayAnimationOnStart__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayAnimationOnStart__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayAnimationOnStart__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimationOnStart__Class>(type_info(), "Moon", "PlayAnimationOnStart");
        }
        inline app::PlayAnimationOnStart* create() {
            return il2cpp::create_object<app::PlayAnimationOnStart>(get_class());
        }
    } // namespace PlayAnimationOnStart
} // namespace app::classes::types
