#pragma once
#include <Modloader/app/structs/SetParentAction.h>
#include <Modloader/app/structs/SetParentAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetParentAction {
        inline app::SetParentAction__Class** type_info() {
            static app::SetParentAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetParentAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetParentAction__Class* get_class() {
            return il2cpp::get_class<app::SetParentAction__Class>(type_info(), "", "SetParentAction");
        }
        inline app::SetParentAction* create() {
            return il2cpp::create_object<app::SetParentAction>(get_class());
        }
    } // namespace SetParentAction
} // namespace app::classes::types
