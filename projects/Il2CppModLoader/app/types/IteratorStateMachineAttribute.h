#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IteratorStateMachineAttribute {
        namespace {
            app::IteratorStateMachineAttribute__Class* type_info_ref = nullptr;
        }
        app::IteratorStateMachineAttribute__Class** type_info = &type_info_ref;
        inline app::IteratorStateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::IteratorStateMachineAttribute__Class>(type_info, "System.Runtime.CompilerServices", "IteratorStateMachineAttribute");
        }
        inline app::IteratorStateMachineAttribute* create() {
            return il2cpp::create_object<app::IteratorStateMachineAttribute>(get_class());
        }
    } // namespace IteratorStateMachineAttribute
} // namespace app::classes::types
