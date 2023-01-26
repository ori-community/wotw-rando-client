#pragma once
#include <Modloader/app/structs/MinerThrowAttack.h>
#include <Modloader/app/structs/MinerThrowAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerThrowAttack {
        inline app::MinerThrowAttack__Class** type_info() {
            static app::MinerThrowAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerThrowAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerThrowAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerThrowAttack__Class>(type_info(), "", "MinerThrowAttack");
        }
        inline app::MinerThrowAttack* create() {
            return il2cpp::create_object<app::MinerThrowAttack>(get_class());
        }
    } // namespace MinerThrowAttack
} // namespace app::classes::types
