#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuiltinCategory__Enum {
        namespace {
            app::BuiltinCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::BuiltinCategory__Enum__Class** type_info = &type_info_ref;
        inline app::BuiltinCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::BuiltinCategory__Enum__Class>(type_info, "UnityEngine.Profiling", "BuiltinCategory");
        }
        inline app::BuiltinCategory__Enum* create() {
            return il2cpp::create_object<app::BuiltinCategory__Enum>(get_class());
        }
    } // namespace BuiltinCategory__Enum
} // namespace app::classes::types
