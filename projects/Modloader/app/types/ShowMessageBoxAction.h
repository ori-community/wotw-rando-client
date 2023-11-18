#pragma once
#include <Modloader/app/structs/ShowMessageBoxAction.h>
#include <Modloader/app/structs/ShowMessageBoxAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowMessageBoxAction {
        inline app::ShowMessageBoxAction__Class** type_info() {
            static app::ShowMessageBoxAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowMessageBoxAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowMessageBoxAction__Class* get_class() {
            return il2cpp::get_class<app::ShowMessageBoxAction__Class>(type_info(), "", "ShowMessageBoxAction");
        }
        inline app::ShowMessageBoxAction* create() {
            return il2cpp::create_object<app::ShowMessageBoxAction>(get_class());
        }
    } // namespace ShowMessageBoxAction
} // namespace app::classes::types
