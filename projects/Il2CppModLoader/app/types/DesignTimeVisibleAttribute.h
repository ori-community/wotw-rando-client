#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesignTimeVisibleAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesignTimeVisibleAttribute__Class** type_info;
        inline app::DesignTimeVisibleAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignTimeVisibleAttribute__Class>(type_info, "System.ComponentModel", "DesignTimeVisibleAttribute");
        }
        inline app::DesignTimeVisibleAttribute* create() {
            return il2cpp::create_object<app::DesignTimeVisibleAttribute>(get_class());
        }
    } // namespace DesignTimeVisibleAttribute
} // namespace app::classes::types
