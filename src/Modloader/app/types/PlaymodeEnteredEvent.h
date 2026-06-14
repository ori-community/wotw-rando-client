#pragma once
#include <Modloader/app/structs/PlaymodeEnteredEvent.h>
#include <Modloader/app/structs/PlaymodeEnteredEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaymodeEnteredEvent {
        inline app::PlaymodeEnteredEvent__Class** type_info() {
            static app::PlaymodeEnteredEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaymodeEnteredEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaymodeEnteredEvent__Class* get_class() {
            return il2cpp::get_class<app::PlaymodeEnteredEvent__Class>(type_info(), "", "PlaymodeEnteredEvent");
        }
        inline app::PlaymodeEnteredEvent* create() {
            return il2cpp::create_object<app::PlaymodeEnteredEvent>(get_class());
        }
    } // namespace PlaymodeEnteredEvent
} // namespace app::classes::types
