#pragma once
#include <Modloader/app/structs/GasballBombAttack.h>
#include <Modloader/app/structs/GasballBombAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballBombAttack {
        inline app::GasballBombAttack__Class** type_info() {
            static app::GasballBombAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballBombAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballBombAttack__Class* get_class() {
            return il2cpp::get_class<app::GasballBombAttack__Class>(type_info(), "", "GasballBombAttack");
        }
        inline app::GasballBombAttack* create() {
            return il2cpp::create_object<app::GasballBombAttack>(get_class());
        }
    } // namespace GasballBombAttack
} // namespace app::classes::types
