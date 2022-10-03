#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetUberStateValueStoreAction {
        namespace {
            app::SetUberStateValueStoreAction__Class* type_info_ref = nullptr;
        }
        app::SetUberStateValueStoreAction__Class** type_info = &type_info_ref;
        inline app::SetUberStateValueStoreAction__Class* get_class() {
            return il2cpp::get_class<app::SetUberStateValueStoreAction__Class>(type_info, "", "SetUberStateValueStoreAction");
        }
        inline app::SetUberStateValueStoreAction* create() {
            return il2cpp::create_object<app::SetUberStateValueStoreAction>(get_class());
        }
    } // namespace SetUberStateValueStoreAction
} // namespace app::classes::types
