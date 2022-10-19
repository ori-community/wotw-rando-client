#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncStateMachineAttribute {
        namespace {
            inline app::AsyncStateMachineAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AsyncStateMachineAttribute__Class** type_info = &type_info_ref;
        inline app::AsyncStateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::AsyncStateMachineAttribute__Class>(type_info, "System.Runtime.CompilerServices", "AsyncStateMachineAttribute");
        }
        inline app::AsyncStateMachineAttribute* create() {
            return il2cpp::create_object<app::AsyncStateMachineAttribute>(get_class());
        }
    } // namespace AsyncStateMachineAttribute
} // namespace app::classes::types
