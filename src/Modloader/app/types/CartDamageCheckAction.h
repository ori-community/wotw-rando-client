#pragma once
#include <Modloader/app/structs/CartDamageCheckAction.h>
#include <Modloader/app/structs/CartDamageCheckAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartDamageCheckAction {
        inline app::CartDamageCheckAction__Class** type_info() {
            static app::CartDamageCheckAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartDamageCheckAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartDamageCheckAction__Class* get_class() {
            return il2cpp::get_class<app::CartDamageCheckAction__Class>(type_info(), "", "CartDamageCheckAction");
        }
        inline app::CartDamageCheckAction* create() {
            return il2cpp::create_object<app::CartDamageCheckAction>(get_class());
        }
    } // namespace CartDamageCheckAction
} // namespace app::classes::types
