#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetItemAction {
        namespace {
            app::GetItemAction__Class* type_info_ref = nullptr;
        }
        app::GetItemAction__Class** type_info = &type_info_ref;
        inline app::GetItemAction__Class* get_class() {
            return il2cpp::get_class<app::GetItemAction__Class>(type_info, "", "GetItemAction");
        }
        inline app::GetItemAction* create() {
            return il2cpp::create_object<app::GetItemAction>(get_class());
        }
    } // namespace GetItemAction
} // namespace app::classes::types
