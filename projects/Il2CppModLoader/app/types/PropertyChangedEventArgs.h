#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyChangedEventArgs__Class** type_info;
        inline app::PropertyChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangedEventArgs__Class>(type_info, "System.ComponentModel", "PropertyChangedEventArgs");
        }
        inline app::PropertyChangedEventArgs* create() {
            return il2cpp::create_object<app::PropertyChangedEventArgs>(get_class());
        }
    } // namespace PropertyChangedEventArgs
} // namespace app::classes::types
