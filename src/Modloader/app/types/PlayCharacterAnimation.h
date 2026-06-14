#pragma once
#include <Modloader/app/structs/PlayCharacterAnimation.h>
#include <Modloader/app/structs/PlayCharacterAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation {
        inline app::PlayCharacterAnimation__Class** type_info() {
            static app::PlayCharacterAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayCharacterAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayCharacterAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayCharacterAnimation__Class>(type_info(), "", "PlayCharacterAnimation");
        }
        inline app::PlayCharacterAnimation* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation>(get_class());
        }
    } // namespace PlayCharacterAnimation
} // namespace app::classes::types
