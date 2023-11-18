#pragma once
#include <Modloader/app/structs/SoundAction.h>
#include <Modloader/app/structs/SoundAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundAction {
        inline app::SoundAction__Class** type_info() {
            static app::SoundAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundAction__Class* get_class() {
            return il2cpp::get_class<app::SoundAction__Class>(type_info(), "", "SoundAction");
        }
        inline app::SoundAction* create() {
            return il2cpp::create_object<app::SoundAction>(get_class());
        }
    } // namespace SoundAction
} // namespace app::classes::types
