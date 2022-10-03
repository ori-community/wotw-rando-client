#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProgressChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProgressChangedEventArgs__Class** type_info;
        inline app::ProgressChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ProgressChangedEventArgs__Class>(type_info, "System.ComponentModel", "ProgressChangedEventArgs");
        }
        inline app::ProgressChangedEventArgs* create() {
            return il2cpp::create_object<app::ProgressChangedEventArgs>(get_class());
        }
    } // namespace ProgressChangedEventArgs
} // namespace app::classes::types
