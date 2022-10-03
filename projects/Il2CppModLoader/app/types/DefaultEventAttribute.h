#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultEventAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultEventAttribute__Class** type_info;
        inline app::DefaultEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultEventAttribute__Class>(type_info, "System.ComponentModel", "DefaultEventAttribute");
        }
        inline app::DefaultEventAttribute* create() {
            return il2cpp::create_object<app::DefaultEventAttribute>(get_class());
        }
    } // namespace DefaultEventAttribute
} // namespace app::classes::types
