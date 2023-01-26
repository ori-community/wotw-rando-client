#pragma once
#include <Modloader/app/structs/DamageTextAction.h>
#include <Modloader/app/structs/DamageTextAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTextAction {
        inline app::DamageTextAction__Class** type_info() {
            static app::DamageTextAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTextAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTextAction__Class* get_class() {
            return il2cpp::get_class<app::DamageTextAction__Class>(type_info(), "", "DamageTextAction");
        }
        inline app::DamageTextAction* create() {
            return il2cpp::create_object<app::DamageTextAction>(get_class());
        }
    } // namespace DamageTextAction
} // namespace app::classes::types
