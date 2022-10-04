#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlNode__Class** type_info;
        inline app::IXmlNode__Class* get_class() {
            return il2cpp::get_class<app::IXmlNode__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlNode");
        }
        inline app::IXmlNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IXmlNode__Array>(get_class(), size);
        }
    } // namespace IXmlNode
} // namespace app::classes::types
