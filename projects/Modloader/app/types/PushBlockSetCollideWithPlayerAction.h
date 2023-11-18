#pragma once
#include <Modloader/app/structs/PushBlockSetCollideWithPlayerAction.h>
#include <Modloader/app/structs/PushBlockSetCollideWithPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushBlockSetCollideWithPlayerAction {
        inline app::PushBlockSetCollideWithPlayerAction__Class** type_info() {
            static app::PushBlockSetCollideWithPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushBlockSetCollideWithPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushBlockSetCollideWithPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::PushBlockSetCollideWithPlayerAction__Class>(type_info(), "", "PushBlockSetCollideWithPlayerAction");
        }
        inline app::PushBlockSetCollideWithPlayerAction* create() {
            return il2cpp::create_object<app::PushBlockSetCollideWithPlayerAction>(get_class());
        }
    } // namespace PushBlockSetCollideWithPlayerAction
} // namespace app::classes::types
