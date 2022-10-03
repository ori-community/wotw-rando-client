#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyChangedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyChangedEventHandler__Class** type_info;
        inline app::PropertyChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangedEventHandler__Class>(type_info, "System.ComponentModel", "PropertyChangedEventHandler");
        }
        inline app::PropertyChangedEventHandler* create() {
            return il2cpp::create_object<app::PropertyChangedEventHandler>(get_class());
        }
    } // namespace PropertyChangedEventHandler
} // namespace app::classes::types
