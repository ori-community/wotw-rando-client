#pragma once
#include <Modloader/app/structs/ShowTrialsAction.h>
#include <Modloader/app/structs/ShowTrialsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowTrialsAction {
        inline app::ShowTrialsAction__Class** type_info() {
            static app::ShowTrialsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowTrialsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowTrialsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowTrialsAction__Class>(type_info(), "", "ShowTrialsAction");
        }
        inline app::ShowTrialsAction* create() {
            return il2cpp::create_object<app::ShowTrialsAction>(get_class());
        }
    } // namespace ShowTrialsAction
} // namespace app::classes::types
