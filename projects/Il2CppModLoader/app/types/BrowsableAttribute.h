#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowsableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowsableAttribute__Class** type_info;
        inline app::BrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::BrowsableAttribute__Class>(type_info, "System.ComponentModel", "BrowsableAttribute");
        }
        inline app::BrowsableAttribute* create() {
            return il2cpp::create_object<app::BrowsableAttribute>(get_class());
        }
    } // namespace BrowsableAttribute
} // namespace app::classes::types
