#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProvidePropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProvidePropertyAttribute__Class** type_info;
        inline app::ProvidePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ProvidePropertyAttribute__Class>(type_info, "System.ComponentModel", "ProvidePropertyAttribute");
        }
        inline app::ProvidePropertyAttribute* create() {
            return il2cpp::create_object<app::ProvidePropertyAttribute>(get_class());
        }
    } // namespace ProvidePropertyAttribute
} // namespace app::classes::types
