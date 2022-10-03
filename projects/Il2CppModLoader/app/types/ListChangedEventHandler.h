#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListChangedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListChangedEventHandler__Class** type_info;
        inline app::ListChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ListChangedEventHandler__Class>(type_info, "System.ComponentModel", "ListChangedEventHandler");
        }
        inline app::ListChangedEventHandler* create() {
            return il2cpp::create_object<app::ListChangedEventHandler>(get_class());
        }
    } // namespace ListChangedEventHandler
} // namespace app::classes::types
