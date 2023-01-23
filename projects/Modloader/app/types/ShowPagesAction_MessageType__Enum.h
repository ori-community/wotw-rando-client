#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowPagesAction_MessageType__Enum__Class.h>
#include <Modloader/app/structs/ShowPagesAction_MessageType__Enum.h>

namespace app::classes::types {
    namespace ShowPagesAction_MessageType__Enum {
        namespace {
            inline app::ShowPagesAction_MessageType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ShowPagesAction_MessageType__Enum__Class** type_info = &type_info_ref;
        inline app::ShowPagesAction_MessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowPagesAction_MessageType__Enum__Class>(type_info, "", "ShowPagesAction", "MessageType");
        }
        inline app::ShowPagesAction_MessageType__Enum* create() {
            return il2cpp::create_object<app::ShowPagesAction_MessageType__Enum>(get_class());
        }
    } // namespace ShowPagesAction_MessageType__Enum
} // namespace app::classes::types
