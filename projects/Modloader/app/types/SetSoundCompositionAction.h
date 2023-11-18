#pragma once
#include <Modloader/app/structs/SetSoundCompositionAction.h>
#include <Modloader/app/structs/SetSoundCompositionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetSoundCompositionAction {
        inline app::SetSoundCompositionAction__Class** type_info() {
            static app::SetSoundCompositionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetSoundCompositionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetSoundCompositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetSoundCompositionAction__Class>(type_info(), "", "SetSoundCompositionAction");
        }
        inline app::SetSoundCompositionAction* create() {
            return il2cpp::create_object<app::SetSoundCompositionAction>(get_class());
        }
    } // namespace SetSoundCompositionAction
} // namespace app::classes::types
