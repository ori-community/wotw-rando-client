#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitAction {
        namespace {
            app::WaitAction__Class* type_info_ref = nullptr;
        }
        app::WaitAction__Class** type_info = &type_info_ref;
        inline app::WaitAction__Class* get_class() {
            return il2cpp::get_class<app::WaitAction__Class>(type_info, "", "WaitAction");
        }
        inline app::WaitAction* create() {
            return il2cpp::create_object<app::WaitAction>(get_class());
        }
    } // namespace WaitAction
} // namespace app::classes::types
