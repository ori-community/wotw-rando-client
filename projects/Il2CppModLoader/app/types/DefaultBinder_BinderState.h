#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultBinder_BinderState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultBinder_BinderState__Class** type_info;
        inline app::DefaultBinder_BinderState__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultBinder_BinderState__Class>(type_info, "System", "DefaultBinder", "BinderState");
        }
        inline app::DefaultBinder_BinderState* create() {
            return il2cpp::create_object<app::DefaultBinder_BinderState>(get_class());
        }
    } // namespace DefaultBinder_BinderState
} // namespace app::classes::types
