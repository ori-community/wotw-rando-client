#pragma once
#include <Modloader/app/structs/SeinChargeJump_AttackResponse__Enum.h>
#include <Modloader/app/structs/SeinChargeJump_AttackResponse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJump_AttackResponse__Enum {
        inline app::SeinChargeJump_AttackResponse__Enum__Class** type_info() {
            static app::SeinChargeJump_AttackResponse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChargeJump_AttackResponse__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChargeJump_AttackResponse__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeJump_AttackResponse__Enum__Class>(type_info(), "", "SeinChargeJump", "AttackResponse");
        }
        inline app::SeinChargeJump_AttackResponse__Enum* create() {
            return il2cpp::create_object<app::SeinChargeJump_AttackResponse__Enum>(get_class());
        }
    } // namespace SeinChargeJump_AttackResponse__Enum
} // namespace app::classes::types
