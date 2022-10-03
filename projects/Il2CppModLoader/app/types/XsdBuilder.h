#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder__Class** type_info;
        inline app::XsdBuilder__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder__Class>(type_info, "System.Xml.Schema", "XsdBuilder");
        }
        inline app::XsdBuilder* create() {
            return il2cpp::create_object<app::XsdBuilder>(get_class());
        }
    } // namespace XsdBuilder
} // namespace app::classes::types
