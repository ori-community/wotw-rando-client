#pragma once
#include <Modloader/app/structs/EnableComponentAction.h>
#include <Modloader/app/structs/EnableComponentAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableComponentAction {
        inline app::EnableComponentAction__Class** type_info() {
            static app::EnableComponentAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableComponentAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableComponentAction__Class* get_class() {
            return il2cpp::get_class<app::EnableComponentAction__Class>(type_info(), "", "EnableComponentAction");
        }
        inline app::EnableComponentAction* create() {
            return il2cpp::create_object<app::EnableComponentAction>(get_class());
        }
    } // namespace EnableComponentAction
} // namespace app::classes::types
