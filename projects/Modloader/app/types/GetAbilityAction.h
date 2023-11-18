#pragma once
#include <Modloader/app/structs/GetAbilityAction.h>
#include <Modloader/app/structs/GetAbilityAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAbilityAction {
        inline app::GetAbilityAction__Class** type_info() {
            static app::GetAbilityAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetAbilityAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetAbilityAction__Class* get_class() {
            return il2cpp::get_class<app::GetAbilityAction__Class>(type_info(), "", "GetAbilityAction");
        }
        inline app::GetAbilityAction* create() {
            return il2cpp::create_object<app::GetAbilityAction>(get_class());
        }
    } // namespace GetAbilityAction
} // namespace app::classes::types
