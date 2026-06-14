#pragma once
#include <Modloader/app/structs/ShowPagesAction.h>
#include <Modloader/app/structs/ShowPagesAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowPagesAction {
        inline app::ShowPagesAction__Class** type_info() {
            static app::ShowPagesAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowPagesAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowPagesAction__Class* get_class() {
            return il2cpp::get_class<app::ShowPagesAction__Class>(type_info(), "", "ShowPagesAction");
        }
        inline app::ShowPagesAction* create() {
            return il2cpp::create_object<app::ShowPagesAction>(get_class());
        }
    } // namespace ShowPagesAction
} // namespace app::classes::types
