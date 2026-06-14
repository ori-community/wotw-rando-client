#pragma once
#include <Modloader/app/structs/SetMusicAction.h>
#include <Modloader/app/structs/SetMusicAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetMusicAction {
        inline app::SetMusicAction__Class** type_info() {
            static app::SetMusicAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetMusicAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetMusicAction__Class* get_class() {
            return il2cpp::get_class<app::SetMusicAction__Class>(type_info(), "", "SetMusicAction");
        }
        inline app::SetMusicAction* create() {
            return il2cpp::create_object<app::SetMusicAction>(get_class());
        }
    } // namespace SetMusicAction
} // namespace app::classes::types
