#pragma once
#include <Modloader/app/structs/BreakFireStickAction.h>
#include <Modloader/app/structs/BreakFireStickAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakFireStickAction {
        inline app::BreakFireStickAction__Class** type_info() {
            static app::BreakFireStickAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakFireStickAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakFireStickAction__Class* get_class() {
            return il2cpp::get_class<app::BreakFireStickAction__Class>(type_info(), "", "BreakFireStickAction");
        }
        inline app::BreakFireStickAction* create() {
            return il2cpp::create_object<app::BreakFireStickAction>(get_class());
        }
    } // namespace BreakFireStickAction
} // namespace app::classes::types
