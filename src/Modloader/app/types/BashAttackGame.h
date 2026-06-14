#pragma once
#include <Modloader/app/structs/BashAttackGame.h>
#include <Modloader/app/structs/BashAttackGame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BashAttackGame {
        inline app::BashAttackGame__Class** type_info() {
            static app::BashAttackGame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BashAttackGame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BashAttackGame__Class* get_class() {
            return il2cpp::get_class<app::BashAttackGame__Class>(type_info(), "", "BashAttackGame");
        }
        inline app::BashAttackGame* create() {
            return il2cpp::create_object<app::BashAttackGame>(get_class());
        }
    } // namespace BashAttackGame
} // namespace app::classes::types
