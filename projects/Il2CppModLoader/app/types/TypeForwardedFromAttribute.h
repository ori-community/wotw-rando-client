#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeForwardedFromAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeForwardedFromAttribute__Class** type_info;
        inline app::TypeForwardedFromAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeForwardedFromAttribute__Class>(type_info, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
        }
        inline app::TypeForwardedFromAttribute* create() {
            return il2cpp::create_object<app::TypeForwardedFromAttribute>(get_class());
        }
    } // namespace TypeForwardedFromAttribute
} // namespace app::classes::types
