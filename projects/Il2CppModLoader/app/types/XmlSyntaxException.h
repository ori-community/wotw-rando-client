#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSyntaxException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSyntaxException__Class** type_info;
        inline app::XmlSyntaxException__Class* get_class() {
            return il2cpp::get_class<app::XmlSyntaxException__Class>(type_info, "System.Security", "XmlSyntaxException");
        }
        inline app::XmlSyntaxException* create() {
            return il2cpp::create_object<app::XmlSyntaxException>(get_class());
        }
    } // namespace XmlSyntaxException
} // namespace app::classes::types
