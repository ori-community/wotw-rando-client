#pragma once
#include <Modloader/app/structs/BindAbilityButtonAction.h>
#include <Modloader/app/structs/BindAbilityButtonAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindAbilityButtonAction {
        inline app::BindAbilityButtonAction__Class** type_info() {
            static app::BindAbilityButtonAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindAbilityButtonAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindAbilityButtonAction__Class* get_class() {
            return il2cpp::get_class<app::BindAbilityButtonAction__Class>(type_info(), "", "BindAbilityButtonAction");
        }
        inline app::BindAbilityButtonAction* create() {
            return il2cpp::create_object<app::BindAbilityButtonAction>(get_class());
        }
    } // namespace BindAbilityButtonAction
} // namespace app::classes::types
