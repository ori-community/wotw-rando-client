#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionalAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptionalAttribute__Class** type_info;
        inline app::OptionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::OptionalAttribute__Class>(type_info, "System.Runtime.InteropServices", "OptionalAttribute");
        }
        inline app::OptionalAttribute* create() {
            return il2cpp::create_object<app::OptionalAttribute>(get_class());
        }
    } // namespace OptionalAttribute
} // namespace app::classes::types
