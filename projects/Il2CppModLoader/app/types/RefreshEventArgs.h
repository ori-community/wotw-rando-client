#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RefreshEventArgs__Class** type_info;
        inline app::RefreshEventArgs__Class* get_class() {
            return il2cpp::get_class<app::RefreshEventArgs__Class>(type_info, "System.ComponentModel", "RefreshEventArgs");
        }
        inline app::RefreshEventArgs* create() {
            return il2cpp::create_object<app::RefreshEventArgs>(get_class());
        }
    } // namespace RefreshEventArgs
} // namespace app::classes::types
