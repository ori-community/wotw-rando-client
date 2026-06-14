#pragma once
#include <Modloader/app/structs/SetUberStateValueStoreAction.h>
#include <Modloader/app/structs/SetUberStateValueStoreAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetUberStateValueStoreAction {
        inline app::SetUberStateValueStoreAction__Class** type_info() {
            static app::SetUberStateValueStoreAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetUberStateValueStoreAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetUberStateValueStoreAction__Class* get_class() {
            return il2cpp::get_class<app::SetUberStateValueStoreAction__Class>(type_info(), "", "SetUberStateValueStoreAction");
        }
        inline app::SetUberStateValueStoreAction* create() {
            return il2cpp::create_object<app::SetUberStateValueStoreAction>(get_class());
        }
    } // namespace SetUberStateValueStoreAction
} // namespace app::classes::types
