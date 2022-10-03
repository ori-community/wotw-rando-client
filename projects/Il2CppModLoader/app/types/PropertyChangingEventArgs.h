#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyChangingEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyChangingEventArgs__Class** type_info;
        inline app::PropertyChangingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangingEventArgs__Class>(type_info, "System.ComponentModel", "PropertyChangingEventArgs");
        }
        inline app::PropertyChangingEventArgs* create() {
            return il2cpp::create_object<app::PropertyChangingEventArgs>(get_class());
        }
    } // namespace PropertyChangingEventArgs
} // namespace app::classes::types
