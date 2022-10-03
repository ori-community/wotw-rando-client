#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParenthesizePropertyNameAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParenthesizePropertyNameAttribute__Class** type_info;
        inline app::ParenthesizePropertyNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParenthesizePropertyNameAttribute__Class>(type_info, "System.ComponentModel", "ParenthesizePropertyNameAttribute");
        }
        inline app::ParenthesizePropertyNameAttribute* create() {
            return il2cpp::create_object<app::ParenthesizePropertyNameAttribute>(get_class());
        }
    } // namespace ParenthesizePropertyNameAttribute
} // namespace app::classes::types
