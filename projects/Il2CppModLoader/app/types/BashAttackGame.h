#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BashAttackGame {
        namespace {
            app::BashAttackGame__Class* type_info_ref = nullptr;
        }
        app::BashAttackGame__Class** type_info = &type_info_ref;
        inline app::BashAttackGame__Class* get_class() {
            return il2cpp::get_class<app::BashAttackGame__Class>(type_info, "", "BashAttackGame");
        }
        inline app::BashAttackGame* create() {
            return il2cpp::create_object<app::BashAttackGame>(get_class());
        }
    } // namespace BashAttackGame
} // namespace app::classes::types
