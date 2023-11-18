#pragma once
#include <Modloader/app/structs/SendMessageAction.h>
#include <Modloader/app/structs/SendMessageAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendMessageAction {
        inline app::SendMessageAction__Class** type_info() {
            static app::SendMessageAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SendMessageAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SendMessageAction__Class* get_class() {
            return il2cpp::get_class<app::SendMessageAction__Class>(type_info(), "", "SendMessageAction");
        }
        inline app::SendMessageAction* create() {
            return il2cpp::create_object<app::SendMessageAction>(get_class());
        }
    } // namespace SendMessageAction
} // namespace app::classes::types
