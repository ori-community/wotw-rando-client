#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachineAttribute {
        namespace {
            app::StateMachineAttribute__Class* type_info_ref = nullptr;
        }
        app::StateMachineAttribute__Class** type_info = &type_info_ref;
        inline app::StateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::StateMachineAttribute__Class>(type_info, "System.Runtime.CompilerServices", "StateMachineAttribute");
        }
        inline app::StateMachineAttribute* create() {
            return il2cpp::create_object<app::StateMachineAttribute>(get_class());
        }
    } // namespace StateMachineAttribute
} // namespace app::classes::types
