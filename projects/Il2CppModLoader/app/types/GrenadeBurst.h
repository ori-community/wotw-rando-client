#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrenadeBurst {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrenadeBurst__Class** type_info;
        inline app::GrenadeBurst__Class* get_class() {
            return il2cpp::get_class<app::GrenadeBurst__Class>(type_info, "", "GrenadeBurst");
        }
        inline app::GrenadeBurst* create() {
            return il2cpp::create_object<app::GrenadeBurst>(get_class());
        }
    } // namespace GrenadeBurst
} // namespace app::classes::types
