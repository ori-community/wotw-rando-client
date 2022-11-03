#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChargeJump_AttackResponse__Enum {
        namespace {
            inline app::SeinChargeJump_AttackResponse__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinChargeJump_AttackResponse__Enum__Class** type_info = &type_info_ref;
        inline app::SeinChargeJump_AttackResponse__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeJump_AttackResponse__Enum__Class>(type_info, "", "SeinChargeJump", "AttackResponse");
        }
        inline app::SeinChargeJump_AttackResponse__Enum* create() {
            return il2cpp::create_object<app::SeinChargeJump_AttackResponse__Enum>(get_class());
        }
    } // namespace SeinChargeJump_AttackResponse__Enum
} // namespace app::classes::types
