#pragma once
#include <Modloader/app/structs/ShowSeinUIAction.h>
#include <Modloader/app/structs/ShowSeinUIAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowSeinUIAction {
        inline app::ShowSeinUIAction__Class** type_info() {
            static app::ShowSeinUIAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowSeinUIAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowSeinUIAction__Class* get_class() {
            return il2cpp::get_class<app::ShowSeinUIAction__Class>(type_info(), "", "ShowSeinUIAction");
        }
        inline app::ShowSeinUIAction* create() {
            return il2cpp::create_object<app::ShowSeinUIAction>(get_class());
        }
    } // namespace ShowSeinUIAction
} // namespace app::classes::types
