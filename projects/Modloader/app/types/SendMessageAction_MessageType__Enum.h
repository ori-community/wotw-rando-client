#pragma once
#include <Modloader/app/structs/SendMessageAction_MessageType__Enum.h>
#include <Modloader/app/structs/SendMessageAction_MessageType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendMessageAction_MessageType__Enum {
        inline app::SendMessageAction_MessageType__Enum__Class** type_info() {
            static app::SendMessageAction_MessageType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SendMessageAction_MessageType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SendMessageAction_MessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SendMessageAction_MessageType__Enum__Class>(type_info(), "", "SendMessageAction", "MessageType");
        }
        inline app::SendMessageAction_MessageType__Enum* create() {
            return il2cpp::create_object<app::SendMessageAction_MessageType__Enum>(get_class());
        }
    } // namespace SendMessageAction_MessageType__Enum
} // namespace app::classes::types
