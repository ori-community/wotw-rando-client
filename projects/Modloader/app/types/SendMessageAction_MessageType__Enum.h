#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SendMessageAction_MessageType__Enum__Class.h>
#include <Modloader/app/structs/SendMessageAction_MessageType__Enum.h>

namespace app::classes::types {
    namespace SendMessageAction_MessageType__Enum {
        namespace {
            inline app::SendMessageAction_MessageType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SendMessageAction_MessageType__Enum__Class** type_info = &type_info_ref;
        inline app::SendMessageAction_MessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SendMessageAction_MessageType__Enum__Class>(type_info, "", "SendMessageAction", "MessageType");
        }
        inline app::SendMessageAction_MessageType__Enum* create() {
            return il2cpp::create_object<app::SendMessageAction_MessageType__Enum>(get_class());
        }
    } // namespace SendMessageAction_MessageType__Enum
} // namespace app::classes::types
