#pragma once
#include <Modloader/app/structs/ShowHintAction.h>
#include <Modloader/app/structs/ShowHintAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowHintAction {
        inline app::ShowHintAction__Class** type_info() {
            static app::ShowHintAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowHintAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowHintAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHintAction__Class>(type_info(), "", "ShowHintAction");
        }
        inline app::ShowHintAction* create() {
            return il2cpp::create_object<app::ShowHintAction>(get_class());
        }
    } // namespace ShowHintAction
} // namespace app::classes::types
