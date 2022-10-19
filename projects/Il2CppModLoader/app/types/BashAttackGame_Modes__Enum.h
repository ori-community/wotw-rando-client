#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BashAttackGame_Modes__Enum {
        namespace {
            inline app::BashAttackGame_Modes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BashAttackGame_Modes__Enum__Class** type_info = &type_info_ref;
        inline app::BashAttackGame_Modes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BashAttackGame_Modes__Enum__Class>(type_info, "", "BashAttackGame", "Modes");
        }
        inline app::BashAttackGame_Modes__Enum* create() {
            return il2cpp::create_object<app::BashAttackGame_Modes__Enum>(get_class());
        }
    } // namespace BashAttackGame_Modes__Enum
} // namespace app::classes::types
