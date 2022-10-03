#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyChangingEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyChangingEventHandler__Class** type_info;
        inline app::PropertyChangingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangingEventHandler__Class>(type_info, "System.ComponentModel", "PropertyChangingEventHandler");
        }
        inline app::PropertyChangingEventHandler* create() {
            return il2cpp::create_object<app::PropertyChangingEventHandler>(get_class());
        }
    } // namespace PropertyChangingEventHandler
} // namespace app::classes::types
