#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProgressChangedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProgressChangedEventHandler__Class** type_info;
        inline app::ProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ProgressChangedEventHandler__Class>(type_info, "System.ComponentModel", "ProgressChangedEventHandler");
        }
        inline app::ProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::ProgressChangedEventHandler>(get_class());
        }
    } // namespace ProgressChangedEventHandler
} // namespace app::classes::types
