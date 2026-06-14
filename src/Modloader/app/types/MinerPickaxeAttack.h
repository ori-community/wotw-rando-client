#pragma once
#include <Modloader/app/structs/MinerPickaxeAttack.h>
#include <Modloader/app/structs/MinerPickaxeAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerPickaxeAttack {
        inline app::MinerPickaxeAttack__Class** type_info() {
            static app::MinerPickaxeAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerPickaxeAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerPickaxeAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerPickaxeAttack__Class>(type_info(), "", "MinerPickaxeAttack");
        }
        inline app::MinerPickaxeAttack* create() {
            return il2cpp::create_object<app::MinerPickaxeAttack>(get_class());
        }
    } // namespace MinerPickaxeAttack
} // namespace app::classes::types
