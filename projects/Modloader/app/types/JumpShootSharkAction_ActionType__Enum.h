#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShootSharkAction_ActionType__Enum {
        namespace {
            inline app::JumpShootSharkAction_ActionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootSharkAction_ActionType__Enum__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkAction_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShootSharkAction_ActionType__Enum__Class>(type_info, "", "JumpShootSharkAction", "ActionType");
        }
        inline app::JumpShootSharkAction_ActionType__Enum* create() {
            return il2cpp::create_object<app::JumpShootSharkAction_ActionType__Enum>(get_class());
        }
    } // namespace JumpShootSharkAction_ActionType__Enum
} // namespace app::classes::types
