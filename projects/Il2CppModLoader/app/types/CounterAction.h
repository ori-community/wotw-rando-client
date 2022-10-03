#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CounterAction {
        namespace {
            app::CounterAction__Class* type_info_ref = nullptr;
        }
        app::CounterAction__Class** type_info = &type_info_ref;
        inline app::CounterAction__Class* get_class() {
            return il2cpp::get_class<app::CounterAction__Class>(type_info, "", "CounterAction");
        }
        inline app::CounterAction* create() {
            return il2cpp::create_object<app::CounterAction>(get_class());
        }
    } // namespace CounterAction
} // namespace app::classes::types
