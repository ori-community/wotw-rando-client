#pragma once
#include <Modloader/app/structs/GetItemAction.h>
#include <Modloader/app/structs/GetItemAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetItemAction {
        inline app::GetItemAction__Class** type_info() {
            static app::GetItemAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetItemAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetItemAction__Class* get_class() {
            return il2cpp::get_class<app::GetItemAction__Class>(type_info(), "", "GetItemAction");
        }
        inline app::GetItemAction* create() {
            return il2cpp::create_object<app::GetItemAction>(get_class());
        }
    } // namespace GetItemAction
} // namespace app::classes::types
