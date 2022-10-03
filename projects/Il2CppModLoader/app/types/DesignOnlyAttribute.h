#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesignOnlyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesignOnlyAttribute__Class** type_info;
        inline app::DesignOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignOnlyAttribute__Class>(type_info, "System.ComponentModel", "DesignOnlyAttribute");
        }
        inline app::DesignOnlyAttribute* create() {
            return il2cpp::create_object<app::DesignOnlyAttribute>(get_class());
        }
    } // namespace DesignOnlyAttribute
} // namespace app::classes::types
