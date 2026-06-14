#pragma once
#include <Modloader/app/structs/ActivateAction.h>
#include <Modloader/app/structs/ActivateAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateAction {
        inline app::ActivateAction__Class** type_info() {
            static app::ActivateAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateAction__Class>(type_info(), "", "ActivateAction");
        }
        inline app::ActivateAction* create() {
            return il2cpp::create_object<app::ActivateAction>(get_class());
        }
    } // namespace ActivateAction
} // namespace app::classes::types
