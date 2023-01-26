#pragma once
#include <Modloader/app/structs/MusicAction.h>
#include <Modloader/app/structs/MusicAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicAction {
        inline app::MusicAction__Class** type_info() {
            static app::MusicAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicAction__Class* get_class() {
            return il2cpp::get_class<app::MusicAction__Class>(type_info(), "", "MusicAction");
        }
        inline app::MusicAction* create() {
            return il2cpp::create_object<app::MusicAction>(get_class());
        }
    } // namespace MusicAction
} // namespace app::classes::types
