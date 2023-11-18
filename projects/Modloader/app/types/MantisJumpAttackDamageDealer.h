#pragma once
#include <Modloader/app/structs/MantisJumpAttackDamageDealer.h>
#include <Modloader/app/structs/MantisJumpAttackDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackDamageDealer {
        inline app::MantisJumpAttackDamageDealer__Class** type_info() {
            static app::MantisJumpAttackDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisJumpAttackDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisJumpAttackDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::MantisJumpAttackDamageDealer__Class>(type_info(), "", "MantisJumpAttackDamageDealer");
        }
        inline app::MantisJumpAttackDamageDealer* create() {
            return il2cpp::create_object<app::MantisJumpAttackDamageDealer>(get_class());
        }
    } // namespace MantisJumpAttackDamageDealer
} // namespace app::classes::types
