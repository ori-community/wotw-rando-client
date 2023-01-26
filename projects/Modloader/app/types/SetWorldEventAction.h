#pragma once
#include <Modloader/app/structs/SetWorldEventAction.h>
#include <Modloader/app/structs/SetWorldEventAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetWorldEventAction {
        inline app::SetWorldEventAction__Class** type_info() {
            static app::SetWorldEventAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetWorldEventAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetWorldEventAction__Class* get_class() {
            return il2cpp::get_class<app::SetWorldEventAction__Class>(type_info(), "", "SetWorldEventAction");
        }
        inline app::SetWorldEventAction* create() {
            return il2cpp::create_object<app::SetWorldEventAction>(get_class());
        }
    } // namespace SetWorldEventAction
} // namespace app::classes::types
