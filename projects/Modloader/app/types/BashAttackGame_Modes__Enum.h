#pragma once
#include <Modloader/app/structs/BashAttackGame_Modes__Enum.h>
#include <Modloader/app/structs/BashAttackGame_Modes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BashAttackGame_Modes__Enum {
        inline app::BashAttackGame_Modes__Enum__Class** type_info() {
            static app::BashAttackGame_Modes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BashAttackGame_Modes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BashAttackGame_Modes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BashAttackGame_Modes__Enum__Class>(type_info(), "", "BashAttackGame", "Modes");
        }
        inline app::BashAttackGame_Modes__Enum* create() {
            return il2cpp::create_object<app::BashAttackGame_Modes__Enum>(get_class());
        }
    } // namespace BashAttackGame_Modes__Enum
} // namespace app::classes::types
