#pragma once
#include <Modloader/app/structs/PlaySoundAction.h>
#include <Modloader/app/structs/PlaySoundAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaySoundAction {
        inline app::PlaySoundAction__Class** type_info() {
            static app::PlaySoundAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaySoundAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaySoundAction__Class* get_class() {
            return il2cpp::get_class<app::PlaySoundAction__Class>(type_info(), "", "PlaySoundAction");
        }
        inline app::PlaySoundAction* create() {
            return il2cpp::create_object<app::PlaySoundAction>(get_class());
        }
    } // namespace PlaySoundAction
} // namespace app::classes::types
