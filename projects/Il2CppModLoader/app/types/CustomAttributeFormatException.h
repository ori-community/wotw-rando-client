#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeFormatException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomAttributeFormatException__Class** type_info;
        inline app::CustomAttributeFormatException__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeFormatException__Class>(type_info, "System.Reflection", "CustomAttributeFormatException");
        }
        inline app::CustomAttributeFormatException* create() {
            return il2cpp::create_object<app::CustomAttributeFormatException>(get_class());
        }
    } // namespace CustomAttributeFormatException
} // namespace app::classes::types
