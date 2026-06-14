#pragma once
#include <Modloader/app/structs/MinerPunchAttack.h>
#include <Modloader/app/structs/MinerPunchAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerPunchAttack {
        inline app::MinerPunchAttack__Class** type_info() {
            static app::MinerPunchAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerPunchAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerPunchAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerPunchAttack__Class>(type_info(), "", "MinerPunchAttack");
        }
        inline app::MinerPunchAttack* create() {
            return il2cpp::create_object<app::MinerPunchAttack>(get_class());
        }
    } // namespace MinerPunchAttack
} // namespace app::classes::types
