#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJump_State__Enum {
        namespace {
            app::SeinChargeJump_State__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinChargeJump_State__Enum__Class** type_info = &type_info_ref;
        inline app::SeinChargeJump_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeJump_State__Enum__Class>(type_info, "", "SeinChargeJump", "State");
        }
        inline app::SeinChargeJump_State__Enum* create() {
            return il2cpp::create_object<app::SeinChargeJump_State__Enum>(get_class());
        }
    } // namespace SeinChargeJump_State__Enum
} // namespace app::classes::types
