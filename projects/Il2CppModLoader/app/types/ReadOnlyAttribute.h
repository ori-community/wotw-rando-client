#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReadOnlyAttribute__Class** type_info;
        inline app::ReadOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyAttribute__Class>(type_info, "System.ComponentModel", "ReadOnlyAttribute");
        }
        inline app::ReadOnlyAttribute* create() {
            return il2cpp::create_object<app::ReadOnlyAttribute>(get_class());
        }
    } // namespace ReadOnlyAttribute
} // namespace app::classes::types
