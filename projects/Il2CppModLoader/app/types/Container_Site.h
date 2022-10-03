#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Container_Site {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Container_Site__Class** type_info;
        inline app::Container_Site__Class* get_class() {
            return il2cpp::get_nested_class<app::Container_Site__Class>(type_info, "System.ComponentModel", "Container", "Site");
        }
        inline app::Container_Site* create() {
            return il2cpp::create_object<app::Container_Site>(get_class());
        }
    } // namespace Container_Site
} // namespace app::classes::types
