#pragma once
#include <Modloader/app/structs/WoodenGateDamageAction.h>
#include <Modloader/app/structs/WoodenGateDamageAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WoodenGateDamageAction {
        inline app::WoodenGateDamageAction__Class** type_info() {
            static app::WoodenGateDamageAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WoodenGateDamageAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WoodenGateDamageAction__Class* get_class() {
            return il2cpp::get_class<app::WoodenGateDamageAction__Class>(type_info(), "", "WoodenGateDamageAction");
        }
        inline app::WoodenGateDamageAction* create() {
            return il2cpp::create_object<app::WoodenGateDamageAction>(get_class());
        }
    } // namespace WoodenGateDamageAction
} // namespace app::classes::types
