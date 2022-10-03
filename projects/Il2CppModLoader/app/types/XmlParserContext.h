#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlParserContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlParserContext__Class** type_info;
        inline app::XmlParserContext__Class* get_class() {
            return il2cpp::get_class<app::XmlParserContext__Class>(type_info, "System.Xml", "XmlParserContext");
        }
        inline app::XmlParserContext* create() {
            return il2cpp::create_object<app::XmlParserContext>(get_class());
        }
    } // namespace XmlParserContext
} // namespace app::classes::types
