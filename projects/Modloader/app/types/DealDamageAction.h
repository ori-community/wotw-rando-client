#pragma once
#include <Modloader/app/structs/DealDamageAction.h>
#include <Modloader/app/structs/DealDamageAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DealDamageAction {
        inline app::DealDamageAction__Class** type_info() {
            static app::DealDamageAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DealDamageAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DealDamageAction__Class* get_class() {
            return il2cpp::get_class<app::DealDamageAction__Class>(type_info(), "", "DealDamageAction");
        }
        inline app::DealDamageAction* create() {
            return il2cpp::create_object<app::DealDamageAction>(get_class());
        }
    } // namespace DealDamageAction
} // namespace app::classes::types
