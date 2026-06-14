#pragma once
#include <Modloader/app/structs/PlaySoundPhaseAction.h>
#include <Modloader/app/structs/PlaySoundPhaseAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaySoundPhaseAction {
        inline app::PlaySoundPhaseAction__Class** type_info() {
            static app::PlaySoundPhaseAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaySoundPhaseAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaySoundPhaseAction__Class* get_class() {
            return il2cpp::get_class<app::PlaySoundPhaseAction__Class>(type_info(), "", "PlaySoundPhaseAction");
        }
        inline app::PlaySoundPhaseAction* create() {
            return il2cpp::create_object<app::PlaySoundPhaseAction>(get_class());
        }
    } // namespace PlaySoundPhaseAction
} // namespace app::classes::types
