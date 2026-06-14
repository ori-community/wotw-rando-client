#pragma once
#include <Modloader/app/structs/ShowOptionsAction.h>
#include <Modloader/app/structs/ShowOptionsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowOptionsAction {
        inline app::ShowOptionsAction__Class** type_info() {
            static app::ShowOptionsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowOptionsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowOptionsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowOptionsAction__Class>(type_info(), "", "ShowOptionsAction");
        }
        inline app::ShowOptionsAction* create() {
            return il2cpp::create_object<app::ShowOptionsAction>(get_class());
        }
    } // namespace ShowOptionsAction
} // namespace app::classes::types
