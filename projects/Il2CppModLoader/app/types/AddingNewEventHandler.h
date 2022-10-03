#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddingNewEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddingNewEventHandler__Class** type_info;
        inline app::AddingNewEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AddingNewEventHandler__Class>(type_info, "System.ComponentModel", "AddingNewEventHandler");
        }
        inline app::AddingNewEventHandler* create() {
            return il2cpp::create_object<app::AddingNewEventHandler>(get_class());
        }
    } // namespace AddingNewEventHandler
} // namespace app::classes::types
