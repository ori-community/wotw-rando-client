#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbientValueAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AmbientValueAttribute__Class** type_info;
        inline app::AmbientValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::AmbientValueAttribute__Class>(type_info, "System.ComponentModel", "AmbientValueAttribute");
        }
        inline app::AmbientValueAttribute* create() {
            return il2cpp::create_object<app::AmbientValueAttribute>(get_class());
        }
    } // namespace AmbientValueAttribute
} // namespace app::classes::types
