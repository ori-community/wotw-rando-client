#pragma once
#include <Modloader/app/structs/DebugLogAction.h>
#include <Modloader/app/structs/DebugLogAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugLogAction {
        inline app::DebugLogAction__Class** type_info() {
            static app::DebugLogAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugLogAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugLogAction__Class* get_class() {
            return il2cpp::get_class<app::DebugLogAction__Class>(type_info(), "", "DebugLogAction");
        }
        inline app::DebugLogAction* create() {
            return il2cpp::create_object<app::DebugLogAction>(get_class());
        }
    } // namespace DebugLogAction
} // namespace app::classes::types
